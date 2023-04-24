#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
/* Declaration */
int _strchr(char *str, char c);
void print_base(unsigned int nbr, unsigned int base, char spes, int *count);
void print_d(int nbr, int *count);
void print_s(char *str, int *count);
void print_c(int c, int *count);
void print_r(char *str, int *count);


#endif
