#include "main.h"

/**
 * __putnbr - prints a number to stdout
 * @n: the number to print
 * @len: the address of the len of printed characters
 * Return: nothing
 */

void __putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		_putstr("-2147483648", len);
		return;
	}
	if (n < 0)
	{
		_putchar('-', len);
		n = -n;
	}
	if (n >= 0 && n < 10)
		_putchar(n + '0', len);
	else
	{
		__putnbr(n / 10, len);
		__putnbr(n % 10, len);
	}
}

/**
 * __putnbr_base - print a decimal number to anny base you decide
 * @nbr: the number to print
 * @base: base
 * @spes: the specifier to choose either lower base or upper
 * @count: pointer to the count of printed bytes
 */

void __putnbr_base(unsigned int nbr, unsigned int base, char spes, int *count)
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
		__putnbr_base((nbr / base), base, spes, count);
		__putnbr_base((nbr % base), base, spes, count);
	}
}
