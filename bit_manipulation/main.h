#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Prototypes of the functions */

/* Function to convert a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Function to print the binary representation of a number */
void print_binary(unsigned long int n);

/* Function to get the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Function to set the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Function to set the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Function to return the number of bits you would need to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function to print a character (provided by the school) */
int _putchar(char c);

#endif /* MAIN_H */