#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
void create_directory(const char *new_dir_path){
    struct stat st = {0};
    if(stat(new_dir_path , &st) == -1){
        mkdir(new_dir_path);
    }
}