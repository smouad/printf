#include "main.h"

/**
 * print_r - prints a string on reverse
 * @str: string
 * @count: count
 */

void print_r(char *str, int *count)
{
	int len;

	if (!str)
	{
		write(1, "(null)", 6);
		(*count) += 6;
		return;
	}

	for (len = 0; str[len]; len++)
	;

	while (len--)
		_putchar(str[len], count);
}
