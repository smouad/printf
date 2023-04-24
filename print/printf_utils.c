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
 * @count: poiner to a counter
 * Return: void
 */

void _putstr(char *str, int *count)
{
	int i;

	if (!str)
	{
		str = "(null)";
		return ;
	}
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putstr("\\x0", count);
			_putnbr_base(str[i], 16, 'X', count);
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
		write(1, "(null)", 6);
		(*count) += 6;
		return;
	}
	while (str[len] != '\0')
		len++;
	while (len--)
		_putchar(str[len], count);
}