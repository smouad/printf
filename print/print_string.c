#include "main.h"

/**
 * print_s - print_s a string to the stdout
 * @str: string to print_
 * @count: poiner to a counter
 * Return: void
 */

void print_s(char *str, int *count)
{
	int i;

	str = !str ? "(null)" : str;

	for (i = 0; str[i]; i++)
		print_c(str[i], count);
}
