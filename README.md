File Encryption & Management System in C
Overview
The File Encryption & Management System is a simple command-line application written in C that allows users to encrypt, decrypt, and manage files. The system supports basic file operations such as moving, renaming, deleting, and organizing files by type, size, and date. This project demonstrates the use of file handling, encryption techniques, and system-level operations in C.

Features
File Encryption: Encrypts the content of a file using a simple character shifting method with a specified key.
File Decryption: Decrypts an encrypted file by reversing the encryption process with the same key.
File Operations: Includes functions for moving, renaming, and deleting files.
File Organization: Organizes files in directories based on file type, size, or creation date.
Cross-Platform: Works on systems that support standard C libraries (e.g., Linux, Windows).
Requirements
C Compiler (GCC recommended)
Basic knowledge of file handling in C
Operating system: Linux or Windows (with support for mkdir and file I/O operations)
Installation
Clone the repository to your local machine:

bash
Copy code
git clone https://github.com/your-username/File-Encryption-Management-System.git
Navigate to the project directory:

bash
Copy code
cd File-Encryption-Management-System
Compile the C files:

bash
Copy code
gcc *.c -o file_manager
Run the compiled program:

bash
Copy code
./file_manager
Usage
Available Commands
Encrypt a File

Encrypts a file using a specified key (shifts the ASCII values of characters).
Usage:
bash
Copy code
encrypt_file("path/to/your/file.txt", key);
Example:
bash
Copy code
encrypt_file("file.txt", 5);
Decrypt a File

Decrypts an encrypted file using the same key that was used for encryption.
Usage:
bash
Copy code
decrypt_file("path/to/your/file.txt", key);
Example:
bash
Copy code
decrypt_file("file.txt", 5);
Move a File

Moves a file to a new directory.
Usage:
bash
Copy code
move_file("path/to/old/file", "path/to/new/file");
Rename a File

Renames an existing file.
Usage:
bash
Copy code
rename_file("path/to/old/file", "new_file_name");
Delete a File

Deletes the specified file.
Usage:
bash
Copy code
delete_file("path/to/your/file");
Organize Files by Type

Organizes files in the directory based on their file extension.
Usage:
bash
Copy code
org_by_type("path/to/your/directory");
Organize Files by Size

Organizes files by size, creating directories based on file size ranges.
Usage:
bash
Copy code
org_by_size("path/to/your/directory");
Organize Files by Date

Organizes files based on their creation or modification date.
Usage:
bash
Copy code
org_by_date("path/to/your/directory");
Example Usage
The following code snippet demonstrates how to use the system to encrypt and decrypt a file:

c
Copy code
#include "project_modules.h"

int main() {
    const char *file_path = "path/to/your/file.txt";
    int encryption_key = 5; // Shift key for encryption

    // Encrypt file
    encrypt_file(file_path, encryption_key);

    // Wait for a while or perform other tasks

    // Decrypt file
    decrypt_file(file_path, encryption_key);

    return 0;
}
Contributing
Contributions are welcome! If you'd like to contribute, please fork the repository, make your changes, and create a pull request. Make sure to follow these guidelines:

Keep the code clean and well-documented.
Add tests for any new features.
Ensure the project builds and runs on both Linux and Windows platforms.
License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgments
Thanks to all the contributors who have helped improve this project.
Special thanks to the open-source community for providing resources on C programming and file handling.
