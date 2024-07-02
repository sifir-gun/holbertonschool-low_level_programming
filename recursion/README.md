# Recursion Project

Welcome to the Recursion Project! This project is designed to help you understand and implement recursion in C. By the end of this project, you should be able to explain the concept of recursion, implement recursive functions, and identify situations where recursion is appropriate or not.

## Table of Contents

1. [Learning Objectives](#learning-objectives)
2. [Requirements](#requirements)
3. [Tasks](#tasks)
    - [Task 0](#task-0)
    - [Task 1](#task-1)
    - [Task 2](#task-2)
    - [Task 3](#task-3)
    - [Task 4](#task-4)
    - [Task 5](#task-5)
    - [Task 6](#task-6)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn’t implement recursion

## Requirements

- **Allowed editors**: vi, vim, emacs
- **Compilation**: All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code style**: Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- **Global variables**: Not allowed
- **Function limit**: No more than 5 functions per file
- **Standard library**: Not allowed (except `_putchar`)
- **Loops**: Not allowed
- **Static variables**: Not allowed
- **README.md**: A README.md file, at the root of the folder of the project is mandatory
- **Header file**: The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

## Tasks

### Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

Write a function that prints a string, followed by a new line.

- **Prototype**: `void _puts_recursion(char *s);`

**Example**:
```c
#include "main.h"

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}