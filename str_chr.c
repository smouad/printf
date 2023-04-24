#include "main.h"
/**
 * _strchr - serch for a char @c in set @str
 * @str: string
 * @c: char
 * Return: 1 if find it 0 if not
 */

int _strchr(char *str, char c)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}
