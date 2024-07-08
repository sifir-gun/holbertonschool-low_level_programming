# Malloc & Free - Dynamic Memory Allocation in C

## Resources
**Read or watch:**
- [0x0a - malloc & free - quick overview.pdf](link_to_pdf)
- [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](link_to_video)

**Man or help:**
- `man malloc`
- `man free`

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when to use malloc
- How to use valgrind to check for memory leaks

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

### More Info
You do not have to learn about `calloc` and `realloc`.

## Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)

## Tasks

### 0. Float like a butterfly, sting like a bee
**mandatory**
Write a function that creates an array of chars, and initializes it with a specific char.

- **Prototype:** `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` = 0
- Returns a pointer to the array, or `NULL` if it fails

Example usage:
```c
julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c 
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}