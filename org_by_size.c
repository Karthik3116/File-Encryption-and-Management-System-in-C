#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include "project_modules.h"

void org_by_size(const char *dir_path) {
    DIR *dir = opendir(dir_path);

    struct dirent *dir_entry;
    if (dir == NULL) {
        printf("Cannot open directory, maybe %s does not exist!\n", dir_path);
        return;
    }

    char src_path[1024], dst_path[1024];
    struct stat file_stat;

    while ((dir_entry = readdir(dir)) != NULL) {
        if (strcmp(dir_entry->d_name, ".") == 0 || strcmp(dir_entry->d_name, "..") == 0) {
            continue;
        }

        // Construct the source path
        strcpy(src_path, dir_path);
        strcat(src_path, "/");
        strcat(src_path, dir_entry->d_name);

        // Get file information
        if (stat(src_path, &file_stat) == -1) {
            perror("Error getting file info");
            continue;
        }

        // Skip directories
        if (S_ISDIR(file_stat.st_mode)) {
            continue;
        }

        // Determine file size category
        const char *size_category;
        if (file_stat.st_size < 1024) {
            size_category = "Small"; // Less than 1 KB
        } else if (file_stat.st_size < 1048576) {
            size_category = "Medium"; // 1 KB to 1 MB
        } else {
            size_category = "Large"; // Greater than 1 MB
        }

        // Create a directory for the size category
        strcpy(dst_path, dir_path);
        strcat(dst_path, "/");
        strcat(dst_path, size_category);
        create_directory(dst_path);

        // Move the file to the corresponding directory
        strcat(dst_path, "/");
        strcat(dst_path, dir_entry->d_name);
        move_file(src_path, dst_path);
    }

    closedir(dir);
}
