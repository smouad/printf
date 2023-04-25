#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int		_printf(const char *format, ...);
int		_putchar(int c);
int		_putstr(char *s, int all);
int		_putrev(char *str);
int		_putrot13(char *str);
void	_putnbr(int n, int *len);
void	_putnbr_base(unsigned int n, int isupper, int base, int *len);
void	handle_format(va_list args, int c, int *len);
void print_address(unsigned long int, int *len);
void print_hex(unsigned long int number, int *len);
#endif
