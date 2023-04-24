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
 * _putstr - _putstr a and put \0x insted non print
 * @str: string to print_
 * @count: poiner to a counter
 * Return: void
 */

void _putstr(char *str, int *count)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putstr("\\x0", count);
			print_base(str[i], 16, 'X', count);
				i++;
			if (str[i] == '\0')
			return;
		}
		_putchar(str[i], count);
	}
}

