#include "main.h"

/**
 * print_d - function print_s a nuber on the stdout
 * @nbr: the number to print_
 * @count: counter
 * Return: void
 */

void print_d(int nbr, int *count)
{ 
	if (nbr < 0)
	{
		_putchar('-', count);
		nbr = -nbr;
	}

	if (nbr <= 9)
		_putchar(nbr + '0', count);
	
	else
	{
		print_d(nbr / 10, count);
		print_d(nbr % 10, count);
	}
}
