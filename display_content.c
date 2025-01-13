#include<stdlib.h>
#include<stdio.h>

void open_file(const char *filename){
    FILE* fptr;
    char ch;

    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        perror("Error opening file");
        return;
    }

    while ((ch = getc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);
}
