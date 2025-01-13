#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  // For sleep()

void rename_file(const char *src_path, const char *dst_path) {

    FILE *fptr;

    if (rename(src_path, dst_path) == 0) {
        // File moved successfully
        sleep(1);
        printf("\n\nrenamed File from %s -> to -> %s\n", src_path, dst_path);
    } else {
        // File move failed, check if file exists
        fptr = fopen(src_path , "r");
        if (fptr == NULL) {
            sleep(1);
            printf("\n\n\nFile not found at source :)\n");
        } else {
            sleep(1);
            printf("\n\n failed to rename from %s -> to -> %s\n", src_path, dst_path);
        }
    }
}
