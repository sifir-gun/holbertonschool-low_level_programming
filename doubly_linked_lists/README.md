# Doubly Linked Lists in C

## Resources
Read or watch:
- [What is a Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)

## Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Requirements
- **Allowed editors**: `vi`, `vim`, `emacs`
- **Compilation**: All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code style**: Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- **No global variables**
- **Maximum 5 functions per file**
- **Allowed standard library functions**: `malloc`, `free`, `printf`, and `exit`
- **Header file**: The prototypes of all your functions should be included in your header file called `lists.h`
- **Include guard**: All your header files should be include guarded
- **README.md**: A `README.md` file, at the root of the folder of the project, is mandatory

## Data Structure
Please use this data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;