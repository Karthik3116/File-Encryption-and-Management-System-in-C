# File Encryption & Management System in C

## Project Info

### Project Name
File Encryption & Management System in C

### Project Details
A simple command-line application written in C for encrypting, decrypting, and managing files. It supports various file operations such as moving, renaming, deleting, and organizing files by type, size, and date. The project demonstrates the use of file handling, encryption, and system-level operations in C.

### Outline / Brief Description of the Project
The **File Encryption & Management System** allows users to manage files through encryption/decryption and perform file organization tasks. The system supports cross-platform compatibility and is ideal for learning about file handling and encryption in C.

---

## General Information

1. **General Info About the Project:**
   This project enables users to secure their files through encryption and decryption. Additionally, it supports organizing files based on their type, size, and date. It also provides basic file management options like moving, renaming, and deleting files.

2. **What Problem Does It Solve?**
   The system helps protect sensitive information by providing encryption and decryption capabilities. It also aids in better file organization, reducing clutter in directories and enhancing file management.

3. **Purpose of Your Project:**
   To offer a simple, command-line-based solution for file encryption, decryption, and management that demonstrates essential system-level operations in C.

---

## Technologies Used

- C Programming Language
- GCC Compiler (GNU Compiler Collection)
- Standard C Libraries (`stdio.h`, `stdlib.h`, `string.h`, `sys/stat.h`)

---

## Features

- **File Encryption:** Encrypts a file using a simple shifting method based on a provided key.
- **File Decryption:** Decrypts a file by reversing the encryption process with the same key.
- **File Operations:** Move, rename, and delete files through easy-to-use functions.
- **File Organization:** Organize files based on their type (extension), size, or date.
- **Cross-Platform Compatibility:** Works on both Linux and Windows (with necessary adjustments).

---

## Screenshots

![File Encryption](https://i.ibb.co/mqqn1X6/Screenshot-2025-01-14-022843.png)  
*Screenshot of file encryption functionality.*

---

## Setup

### Setup Info
To run this project, you will need a C compiler (e.g., GCC) and access to a Linux or Windows system that supports file I/O operations.

### Project Requirements/Dependencies
- C Compiler (e.g., GCC)
- Standard C libraries (`stdio.h`, `stdlib.h`, `string.h`, `sys/stat.h`)
  
You can install GCC on Linux via the terminal using:
```bash
## Steps to Install / Get Started with the Project

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/File-Encryption-and-Management-System-in-C.git
Navigate to the Project Directory:

bash
Copy code
cd File-Encryption-and-Management-System-in-C
Compile the C Files:

bash
Copy code
gcc main.c display_content.c move_file.c rename_file.c create_directory.c delete_file.c org_by_type.c org_by_date.c org_by_size.c encrypt_file.c decrypt_file.c -o run
./run
Contact
LinkedIn: kethavath kartheek
Leetcode: professor3116



