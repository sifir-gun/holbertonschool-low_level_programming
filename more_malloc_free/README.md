# More Malloc, Free

## Resources
Read or watch:
- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)
- man or help:
  - `exit (3)`
  - `calloc`
  - `realloc`

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- How to use the `exit` function
- What are the functions `calloc` and `realloc` from the standard library and how to use them

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Quiz Questions
1. What is wrong with this code:

    ```c
    int cp(void)
    {
        char *s;
        s = malloc(12);
        strcpy(s, "Best School");
        return (0);
    }
    ```

    - [x] You don’t have enough space to store the copy of the string “Best School”
    - [ ] There is no comment
    - [ ] You can’t call `strcpy` with a string literal
    - [x] `malloc` can fail so we should check its return value all the time before using the pointers returned by the function.

2. If I want to copy the string “Best School” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):

    - [x] `malloc(sizeof(“Best School”))`
    - [ ] `malloc(strlen(“Best School”))`
    - [ ] `malloc(11)`
    - [x] `malloc(12)`
    - [ ] `malloc(sizeof(“Best School”) + 1)`
    - [x] `malloc(strlen(“Best School”) + 1)`

## Tasks

### 0. Trust no one
Write a function that allocates memory using `malloc`.

- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98

Example:

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}