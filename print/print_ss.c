#include "main.h"

/**
 * print_S - print_s a and put \0x insted non print
 * @str: string to print_
 * @count: poiner to a counter
 * Return: void
 */

void print_S(char *str, int *count)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			print_s("\\x0", count);
			print_base(str[i], 16, 'X', count);
				i++;
			if (str[i] == '\0')
			return;
		}
		_putchar(str[i], count);
	}
}
