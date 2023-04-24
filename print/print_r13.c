#include "main.h"

/**
 * _putrev - prints a string on rot13
 * @str: string
 * @count: count
 */

void _putrev(char *str, int *count)
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
