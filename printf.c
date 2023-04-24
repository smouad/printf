#include "main.h"

/**
 * handle_format - executes the right function
 * @args: the argsrgument pointer of the variadic function
 * @c: the character to check
 * @len: character len
 * Return: returns nothing
 */

void handle_format(va_list args, int c, int *len)
{
	if (c == 'c')
		*len += _putchar(va_arg(args, int));
	else if (c == '%')
		*len += _putchar('%');
	else if (c == 's')
		*len += _putstr(va_arg(args, char *), 0);
	else if (c == 'S')
		*len += _putstr(va_arg(args, char *), 1);
	else if (c == 'd' || c == 'i')
		_putnbr(va_arg(args, int), len);
	else if (c == 'b')
		_putnbr_base(va_arg(args, int), 0, 2, len);
	else if (c == 'u')
		_putnbr_base(va_arg(args, unsigned int), 0, 10, len);
	else if (c == 'o')
		_putnbr_base(va_arg(args, unsigned int), 0, 8, len);
	else if (c == 'x')
		_putnbr_base(va_arg(args, unsigned int), 0, 16, len);
	else if (c == 'X')
		_putnbr_base(va_arg(args, unsigned int), 1, 16, len);
	else if (c == 'p')
	{
		*len += _putstr("0x", 0);
		_putnbr_base(va_arg(args, unsigned long int), 0, 16, len);
	}
	else if (c == 'R')
		*len += _putrot13(va_arg(args, char *));
	else if (c == 'r')
		*len += _putrev(va_arg(args, char *));
	else
	{
		*len += _putchar('%');
		*len += _putchar(c);
	}
}

/**
 * _printf - prints a formatted string
 * @format: the format of the string to print
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			handle_format(args, format[i], &len);
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
