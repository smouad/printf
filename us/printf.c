#include "main.h"

/**
 * format_handler - handle the format
 * @args: args
 * @count: poiner to a len
 * @pres: precision
 */

void format_handler(va_list args, char pres, int *count)
{
	if (pres == '%')
		_putchar('%', count);
	else if (pres == 'c')
		_putchar(va_arg(args, int), count);
	else if (pres == 's')
		_putstr(va_arg(args, char *), count);
	else if (pres == 'r')
		_putrev(va_arg(args, char *), count);
	else if (pres == 'R')
		_put_putrot13(va_arg(args, char *), count);
	else if (pres == 'd' || pres == 'i')
		__putnbr(va_arg(args, int), count);
	else if (pres == 'u')
		__putnbr_base(va_arg(args, int), 10, 'x', count);
	else if (pres == 'o')
		__putnbr_base(va_arg(args, int), 8, 'x', count);
	else if (pres == 'x' || pres == 'X')
		__putnbr_base(va_arg(args, int), 16, pres, count);
	else if (pres == 'p')
	{
		_putstr("0x", count);
		__putnbr_base(va_arg(args, int), 16, 'x', count);
	}
	else
	{
		_putchar('%', count);
		_putchar(pres, count);
	}
}

/**
 * _printf - function printf
 * @format: format
 * Return: the number of bytes printed
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			format_handler(args, format[i], &count);
		}
		else
			_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
#include <stdio.h>
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
