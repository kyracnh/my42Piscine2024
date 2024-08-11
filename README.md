# my42Piscine2024 💎
This Repository is for my projects piscine 1337 July 2024 ✍️


# Handle Errors CLI


> THIS PART IS WROTE BY MY FRIEND ISMAEL 🤝

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




==================================
## STRCMP

Cette fonction permet de comparer deux chaînes de caractères et de savoir si la première est inférieure, égale ou supérieure à la seconde. Cette comparaison sera réalisée en utilisant l'ordre lexicographique et donc, en tenant compte des valeurs numérique des codes ASCII (ou Unicode, selon l'encodage utilisé) des différents caractères comparés. 

En langage C, les chaînes de caractères sont qualifiées d'AZT : A Zéro Terminal. Cela signifie qu'une chaîne de caractères se termine forcément par un code ASCII nul (pouvant aussi être représenté par '\0'). 

# STRNCMP

Cette fonction permet de comparer deux chaînes de caractères et de savoir si la première est inférieure, égale ou supérieure à la seconde. Cette comparaison sera faite dans l'ordre lexicographique (et donc, en tenant compte des valeurs ASCII des différents caractères comparés). Néanmoins la comparaison se fera au maximum sur les length premiers caractères.

Paramètres

    first : la première chaîne de caractères à comparer.
    second : la seconde chaîne de caractères à comparer.
    length : le nombre maximal (un entier non signé) de caractères à comparer.

Valeur de retour

Trois cas distincts doivent être considérés. Soit les deux chaînes sont égales : dans ce cas, une valeur nulle sera retournée. Soit la première chaîne est plus petite que la seconde (dans l'ordre lexicographique) : dans ce cas, une valeur négative sera retournée. Soit la première chaîne est plus grande que la seconde : dans ce dernier cas, une valeur positive sera renvoyées. Dans tous les cas, la valeur absolue indiquera la position du premier caractères permettant de produire le résultat. 

# STRCAT
Cette fonction permet de rajouter à une chaîne de caractères déjà existante le contenu d'une seconde. Autrement dit de concaténer les contenu de deux chaînes de caractères, mais le résultat sera stocké dans la première chaîne passé en paramètre (aucune nouvelle chaîne ne sera produite). Bien entendu le bloc de mémoire devant recevoir le contenu à concaténer doit être alloué de manière à être suffisament grand pour contenir la totalité des deux chaînes caractères. 

## White spaces
In ASCII (American Standard Code for Information Interchange), whitespace characters are those that provide space in text without rendering any visible mark. These characters include:

Space (SP) - ASCII code 32.
Horizontal Tab (HT) - ASCII code 9.
Line Feed (LF) - ASCII code 10, also known as newline.
Carriage Return (CR) - ASCII code 13.
Vertical Tab (VT) - ASCII code 11.
Form Feed (FF) - ASCII code 12.



## wc Command

The wc command stands for word count, and it is used to count lines, words, and characters in text files or input streams. The command has several options:

    -l: Counts the number of lines.
    -w: Counts the number of words.
    -c: Counts the number of characters.

## awk
Is a command-line tool for processing and analyzing text data.
## sed
Stands for stream editor, and it's used for basic text transformations. 
