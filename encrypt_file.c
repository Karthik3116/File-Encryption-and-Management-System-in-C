#include <stdio.h>
#include <stdlib.h>

void encrypt_file(const char *file_path, int key) {
    FILE *file = fopen(file_path, "rb+"); 
    
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char ch;


    while (fread(&ch, sizeof(char), 1, file) == 1) {
        
        fseek(file, -1, SEEK_CUR);


        ch += key;


        fwrite(&ch, sizeof(char), 1, file);


        fflush(file);
    }

    fclose(file);
    printf("File encrypted successfully: %s\n", file_path);
}
