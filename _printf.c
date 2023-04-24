#include "main.h"

/**
 * format_handler - handle the format
 * @args: args
 * @count: poiner to a counter
 * @pres: precision
 */

void format_handler(va_list args, char pres, int *count)
{
	if (pres == 'c')
		print_c(va_arg(args, int), count);
	else if (pres == 's')
		print_s(va_arg(args, char*), count);
	else if (pres == '%')
		print_c('%', count);
	else if (pres == 'd' || pres == 'i')
		print_di(va_arg(args, int), 'd', count);
	else if (pres == 'r')
		print_r(va_arg(args, char*), count);
	else if (pres == 'x' || pres == 'X')
		print_base(va_arg(args, int), 16, pres, count);
	else if (pres == 'p')
	{
		print_s("0x", count);
		print_base(va_arg(args, int), 16, 'x', count);
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
			if (_strchr("cdibupxXsSorR%", format[i]) == 0)
			{
				return (-1);
			}
			format_handler(args, format[i], &count);
		}
		else
			print_c(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
