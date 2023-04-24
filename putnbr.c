#include "main.h"

/**
 * _putnbr - prints a number to stdout
 * @n: the number to print
 * @counter: the address of the counter of printed characters
 * Return: nothing
 */

void _putnbr(int n, int *counter)
{
	if (n == -2147483648)
	{
		_putstr("-2147483648", counter);
		return;
	}
	if (n < 0)
	{
		_putchar('-', counter);
		n = -n;
	}
	if (n >= 0 && n < 10)
		_putchar(n + '0', counter);
	else
	{
		_putnbr(n / 10, counter);
		_putnbr(n % 10, counter);
	}
}

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
