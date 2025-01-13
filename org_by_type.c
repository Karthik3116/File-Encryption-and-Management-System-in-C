#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include"project_modules.h"



void org_by_type(const char *dir_path){

    DIR *dir = opendir(dir_path);

    struct dirent *dir_entry;
    if(dir == NULL){
        printf("cant open file , maybe directory %s dont exist ! ", dir_path);
    }

    char src_path[1024], dst_path[1024];
    char *file_extension;

    while((dir_entry = readdir(dir)) != NULL){
        if (strcmp(dir_entry->d_name, ".") == 0 || strcmp(dir_entry->d_name, "..") == 0) {
            continue;
        }

        strcpy(src_path, dir_path);
        strcat(src_path, "/");
        strcat(src_path, dir_entry->d_name);

        // Get file extension
        file_extension = strrchr(dir_entry->d_name, '.');
        if (file_extension != NULL) {
            // Create a directory for the file extension type (e.g., "txt", "jpg")
            strcpy(dst_path, dir_path);
            strcat(dst_path, "/");
            strcat(dst_path, file_extension + 1);
            create_directory(dst_path);

            // Move the file to the corresponding directory
            strcpy(dst_path, dir_path);
            strcat(dst_path, "/");
            strcat(dst_path, file_extension + 1);
            strcat(dst_path, "/");
            strcat(dst_path, dir_entry->d_name);
            move_file(src_path, dst_path);
        }

        sleep(0.2);
    }
    closedir(dir);

} 