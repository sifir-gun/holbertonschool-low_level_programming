# Holberton School - argc, argv

Welcome to the repository for the Holberton School project on using command-line arguments in C. This project covers how to work with arguments passed to a C program, different prototypes of the `main` function, and handling unused variables.

## Learning Objectives

At the end of this project, you should be able to explain the following concepts to anyone, without the help of Google:

### General

- How to use arguments passed to your program
- What are two prototypes of `main` that you know of, and in which case do you use one or the other
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library

## Tasks

### 0. It ain't what they call you, it's what you answer to

**Description:**
Write a program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program

**Example:**
```bash
julien@ubuntu:~/argc_argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/argc_argv$ ./mynameis 
./mynameis
julien@ubuntu:~/argc_argv$ mv mynameis mynewnameis
julien@ubuntu:~/argc_argv$ ./mynewnameis 
./mynewnameis
