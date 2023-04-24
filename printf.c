#include "main.h"

/**
 * format_handler - handle the format
 * @args: args
 * @count: poiner to a counter
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
		_putrot13(va_arg(args, char *), count);
	else if (pres == 'd' || pres == 'i')
		_putnbr(va_arg(args, int), count);
	else if (pres == 'u')
		_putnbr_base(va_arg(args, int), 10, 'x', count);
	else if (pres == 'o')
		_putnbr_base(va_arg(args, int), 8, 'x', count);
	else if (pres == 'x' || pres == 'X')
		_putnbr_base(va_arg(args, int), 16, pres, count);
	else if (pres == 'p')
	{
		_putstr("0x", count);
		_putnbr_base(va_arg(args, int), 16, 'x', count);
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
