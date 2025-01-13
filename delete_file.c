#include<stdio.h>
#include<stdlib.h>

void delete_file(const char *file_path){

    if(remove(file_path) == 0){
        printf("\n\n file removed from %s"  , file_path);
    }else{
        printf("No file found at source path :)");
    }
}