# Holberton School Low-Level Programming Exercises

Welcome to the repository for low-level programming exercises in C, developed as part of the Holberton School curriculum. This repository showcases a variety of programming challenges designed to develop proficiency in C programming, emphasizing pointers, arrays, and strings.

## Table of Contents

1. [Introduction](#introduction)
2. [General Information](#general-information)
3. [Requirements](#requirements)
4. [Installation](#installation)
5. [Usage](#usage)

## Introduction

This repository contains a series of C programming exercises that were completed as part of the Holberton School curriculum. Holberton School provides intensive software engineering training that covers various aspects of programming, including low-level programming, algorithms, and data structures. The exercises included here focus on fundamental concepts such as pointers, memory allocation, and string manipulation.

## General Information

- **Pointers**: Understanding and using pointers.
- **Arrays**: Declaration, initialization, and usage of arrays.
- **Pointers vs Arrays**: Differences and use cases.
- **Strings**: Manipulating strings using pointers and arrays.
- **Scope of Variables**: Understanding variable scope in C.

## Requirements

- **Editors**: vi, vim, emacs
- **Compilation**: All files will be compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code Style**: Use the Betty style guide, checked with `betty-style.pl` and `betty-doc.pl`
- **Global Variables**: Not allowed
- **Function Limit**: No more than 5 functions per file
- **Standard Library**: Not allowed, except for `_putchar`
- **Main Files**: Provided `main.c` files for testing should not be pushed to the repository
- **Header File**: All function prototypes and `_putchar` should be declared in `main.h`
- **Push Header**: Ensure `main.h` is included in the repository

## Installation

To set up this project on your local machine, follow the steps below:

1. **Clone the repository**:
    ```bash
    git clone https://github.com/yourusername/holbertonschool-low_level_programming.git
    ```

2. **Navigate to the project directory**:
    ```bash
    cd holbertonschool-low_level_programming/pointers_arrays_strings
    ```

3. **Ensure you have `gcc` installed**:
    ```bash
    sudo apt-get install gcc
    ```

## Usage

Each exercise can be compiled and run separately. Below are the general steps to compile and execute the C programs in this repository:

1. **Compile the program**:
    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <source_file.c> -o <output_file>
    ```

2. **Run the compiled program**:
    ```bash
    ./<output_file>
    ```

For example, to compile and run `0-reset_to_98.c`, navigate to the directory containing the file and execute:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
./0-98
