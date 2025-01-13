#include<stdio.h>
#include"project_modules.h"

void display_methods() {
    printf("\nSelect an operation:\n");
    printf("1. Open File\n");
    printf("2. Move File\n");
    printf("3. Rename File\n");
    printf("4. Delete File\n");
    printf("5. Organize by Date\n");
    printf("6. Organize by Size\n");
    printf("7. Organize by Type\n");
    printf("8. Encrypt File\n");
    printf("9. Decrypt File\n");
    printf("10. Exit\n");
}



int main(){

    // const char *filename = "file1.txt";
    // open_file(filename);  // Change to open_file
    // // move_file("test_move.txt" ,"E:/Desktop/kinnuc/project/test_move.txt" );
    // // rename_file("test_move.txt" ,"E:/Desktop/kinnuc/project/test_move.txt" );
    // // delete_file("E:/Desktop/kinnuc/project/test_move.txt");
    // // org_by_date("E:/Desktop/kinnuc/testing");

    // // org_by_size("E:/Desktop/kinnuc/testing");

    // encrypt_file("E:/Desktop/kinnuc/testing/Small/one.txt", 20);
    // sleep(3);
    // decrypt_file("E:/Desktop/kinnuc/testing/Small/one.txt", 20);

    int choice;
    char filename[256];
    char src_path[256], dst_path[256];
    int key;

    while(1){
        display_methods();
        printf("Enter your choice : ");
        scanf("%d" , &choice);

        switch (choice)
        {
        case 1:
            printf("Enter file name to open: ");
            scanf("%s", filename);
            printf("\n\n\n");
            open_file(filename);
            printf("\n\n\n");
            break;
        case 2:
            printf("Enter source path: ");
            scanf("%s", src_path);
            printf("Enter destination path: ");
            scanf("%s", dst_path);
            move_file(src_path, dst_path);
            printf("\n\n\n");
            break;
        case 3:
            printf("Enter current file name: ");
            scanf("%s", src_path);
            printf("Enter new file name: ");
            scanf("%s", dst_path);
            rename_file(src_path, dst_path);
            printf("\n\n\n");
            break;
        case 4:
            printf("Enter file name to delete: ");
            scanf("%s", filename);
            delete_file(filename);
            printf("\n\n\n");
            break;
        case 5:
            printf("Enter directory path to organize by date: ");
            scanf("%s", src_path);
            org_by_date(src_path);
            printf("\n\n\n");
            break;
        case 6:
            printf("Enter directory path to organize by size: ");
            scanf("%s", src_path);
            org_by_size(src_path);
            printf("\n\n\n");
            break;
        case 7:
            printf("Enter directory path to organize by type: ");
            scanf("%s", src_path);
            org_by_type(src_path);
            printf("\n\n\n");
            break;
        case 8:
            printf("Enter file name to encrypt: ");
            scanf("%s", filename);
            printf("Enter encryption key: ");
            scanf("%d", &key);
            encrypt_file(filename, key);
            printf("\n\n\n");
            break;
        case 9:
            printf("\n\n\n");
            printf("Enter file name to decrypt: ");
            scanf("%s", filename);
            printf("Enter decryption key: ");
            scanf("%d", &key);
            decrypt_file(filename, key);
            printf("\n\n\n");
            break;
        case 10:
            printf("\n\n\n");
            printf("Exiting...\n");
            printf("\n\n\n");
            return 0;
        default:
            printf("\n\n\n");
            printf("Invalid choice. Please try again.\n");
            printf("\n\n\n");
            break;
        }
        
        
    }

    

    return 0;
}
