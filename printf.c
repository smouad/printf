#include "main.h"

void print_address(va_list ap, int *counter)
{
	unsigned long int addrr;

	addrr = va_arg(ap, unsigned long int);
	if (addrr)
	{
		*counter += putstr("0x", 0);
		put_address(addrr, counter);
	}
	else
		*counter += putstr("(nil)", 0);
}

/**
 *select_id - executes the right function
 *@ap: the aprgument pointer of the variadic function
 *@c: the character to check
 *@counter: character counter
 *Return: returns nothing
 */

void select_id(va_list ap, int c, int *counter)
{
	if (c == 'c')
		*counter += _putchar(va_arg(ap, int));
	else if (c == 's')
		*counter += putstr(va_arg(ap, char *), 0);
	else if (c == '%')
		*counter += _putchar('%');
	else
	{
		*counter += _putchar('%');
		*counter += _putchar(c);
	}
}

/**
 *_printf - prints a formatted string
 *@format: the format of the string to print
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	va_list ap;

	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			select_id(ap, format[i], &counter);
		}
		else
			counter += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (counter);
}
