#ifndef FILE_MODULE_H
#define FILE_MODULE_H
#include <unistd.h>  // For sleep()


void open_file(const char *filename);
void move_file(const char *src_path , const char *dst_path) ;
void rename_file(const char *src_path , const char *dst_path) ;
void delete_file(const char *file_path);
void org_by_type(const char *dir_path);
void org_by_date(const char *dir_path);
void create_directory(const char *new_dir_path);
void org_by_size(const char *dir_path);
void encrypt_file(const char *file_path, int key);
void decrypt_file(const char *file_path, int key);

#endif // FILE_MODULE_H
