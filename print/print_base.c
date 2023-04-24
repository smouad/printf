#include "main.h"

/**
 * _putnbr_base - print a decimal number to anny base you decide
 * @nbr: the number to print
 * @base: base
 * @spes: the specifier to choose either lower base or upper
 * @count: pointer to the count of printed bytes
 */

void _putnbr_base(unsigned int nbr, unsigned int base, char spes, int *count)
{
	char *lower = "0123456789abcdef";
	char *upper = "0123456789ABCDEF";
	char *list;

	list = spes == 'X' ? upper : lower;


	if (nbr < 0)
	{
		_putchar('-', count);
		nbr = -nbr;
	}

	if (nbr < base)
		_putchar(list[nbr], count);

	else
	{
		_putnbr_base((nbr / base), base, spes, count);
		_putnbr_base((nbr % base), base, spes, count);
	}
}