# my42Piscine2024
This Repository is for my projects piscine 1337 July 2024


# Handle Errors CLI


~THIS PART IS WROTE BY MY FRIEND ISMAEL~

## C NOTES

# Write Function :

Write need : #include <unistd.h>
Pour écrire un caractère sans adresse : write(1, “a”, 1)


# Write

write(1, &c, 1)

    1: This is the file descriptor for standard output (stdout).
        Standard Output: In Unix-like systems, file descriptor 1 is conventionally used for standard output. This means that anything written to this file descriptor is sent to the terminal or console.
        File Descriptors: File descriptors are integer handles used to access files or I/O streams. File descriptor 0 is standard input (stdin), 1 is standard output (stdout), and 2 is standard error (stderr).

    &c: This is a pointer to the data buffer to be written.
        &c: If c is a variable of type char, then &c is a pointer to that variable. In this case, &c points to the memory address where the single byte to be written is stored.
        Buffer: The write function will read from this buffer and write the data to the specified file descriptor.

    1: This is the number of bytes to write.
        Count: This specifies that only one byte should be written from the buffer pointed to by &c.

# File Descriptor :

	▪	Standard Input (stdin): Used for reading data, typically from the keyboard.
	▪	Standard Output (stdout): Used for writing data to the console or terminal.
	▪	Standard Error (stderr): Used for writing error messages to the console or terminal.

# gcc/cc -Wall -Werror -Wextra

	▪	Wall: Enables a standard set of useful warnings.
	▪	Werror: Treats warnings as errors, causing the build to fail if any warnings are present.
	▪	Wextra: Enables additional warnings not covered by -Wall.

# #include <unistd.h>

Header File: <unistd.h> is a standard header file in Unix-like operating systems that defines various constants, types, and function prototypes for system calls and library functions that are part of the POSIX standard.

Functionality: It provides access to functions for handling file descriptors, process management, and various other system-level operations.

The term unistd comes from "UNIX Standard" or "UNIX Standard Interface," and it refers to a set of POSIX (Portable Operating System Interface) standard functions and constants that provide a low-level interface to the underlying operating system in Unix-like systems. The unistd.h header file in C includes these standard functions and constants used for performing various system-level operations.

# What is #include?

	▪	Preprocessor Directive: #include is a preprocessor directive in C. Preprocessor directives are commands that are processed by the preprocessor before the actual compilation of code begins.

	▪	Purpose: The primary purpose of #include is to incorporate the contents of one file into another. This is often used to include header files that contain declarations and macros that are needed in different parts of a program.
