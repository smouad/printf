#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/* Declaration */
int _printf(const char *format, ...);
void _putchar(int c, int *count);
void _putstr(char *str, int *count);
void _putrev(char *str, int *count);
void _put_putrot13(char *str, int *count);
void __putnbr_base(unsigned int nbr, unsigned int base, char spes, int *count);
void __putnbr(int nbr, int *count);

#endif
