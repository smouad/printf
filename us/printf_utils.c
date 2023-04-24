#include "main.h"

/**
 * _putchar - a punction that print_s a char @c to the stdout
 * @c: the char to print_
 * @count:a pointer to int that gonna increment
 * buy 1 each time we print_ a char
 * Return: void
 */

void _putchar(int c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * _putstr - print a string and put \0x instead non print
 * @str: string to print_
 * @count: poiner to a len
 * Return: void
 */

void _putstr(char *str, int *count)
{
	int i;

	str = !str ? "(null)" : str;
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putstr("\\x0", count);
			__putnbr_base(str[i], 16, 'X', count);
				i++;
			if (str[i] == '\0')
			return;
		}
		_putchar(str[i], count);
	}
}

/**
 * _putrev - prints a string on reverse
 * @str: string
 * @count: count
 */

void _putrev(char *str, int *count)
{
	int len;

	if (!str)
	{
		(*count) += write(1, "(null)", 6);
		return;
	}
	len = 0;
	while (str[len] != '\0')
		len++;
	while (len--)
		_putchar(str[len], count);
}

/**
 * _put_putrot13 - prints a string on _putrot13
 * @str: string
 * @count: count
 */

void _put_putrot13(char *str, int *count)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
		|| (str[i] >= 'A' && str[i] <= 'M'))
			_putchar(str[i] + 13, count);

		else if ((str[i] >= 'n' && str[i] <= 'z')
		|| (str[i] >= 'N' && str[i] <= 'Z'))
			_putchar(str[i] - 13, count);
		else
			_putchar(str[i], count);
	}
}
