#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* Declaration */
int _printf(const char *format, ...);
void _putchar(int c, int *count);
void _putstr(char *str, int *count);
int _strchr(char *str, char c);
void _putnbr_base(unsigned int nbr, unsigned int base, char spes, int *count);
void print_d(int nbr, int *count);
void _putrev(char *str, int *count);


#endif
