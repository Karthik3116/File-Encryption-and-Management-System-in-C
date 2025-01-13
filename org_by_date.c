#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<time.h>
#include"project_modules.h"



void org_by_date(const char *dir_path){

    DIR *dir = opendir(dir_path);

    
    if(dir == NULL){
        printf("cant open file , maybe directory %s dont exist ! ", dir_path);
    }
    struct dirent *dir_entry;
    char src_path[1024], dst_path[1024];
    char *file_extension;
    struct stat file_stat;
    struct tm *time_info;
    char date_str[20];

    while((dir_entry = readdir(dir)) != NULL){
        if (strcmp(dir_entry->d_name, ".") == 0 || strcmp(dir_entry->d_name, "..") == 0) {
            continue;
        }

        strcpy(src_path, dir_path);
        strcat(src_path, "/");
        strcat(src_path, dir_entry->d_name);
        
        if (stat(src_path, &file_stat) == -1) {
            perror("Error getting file stats");
            continue;
        }

        time_info = localtime(&file_stat.st_mtime); // st_mtime is last modification time
        strftime(date_str, sizeof(date_str), "%Y-%m-%d", time_info);


        


        strcpy(dst_path, dir_path);
        strcat(dst_path, "/");
        strcat(dst_path, date_str);
        create_directory(dst_path);

        strcpy(dst_path, dir_path);
        strcat(dst_path, "/");
        strcat(dst_path, date_str);
        strcat(dst_path, "/");
        strcat(dst_path, dir_entry->d_name);
        move_file(src_path, dst_path);




        sleep(0.2);
    }
    closedir(dir);

} 