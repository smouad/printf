#include "main.h"

/**
 * _putnbr - prints a number to stdout
 * @n: the number to print
 * @len: the address of the len of printed characters
 * Return: nothing
 */

void _putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		*len += _putstr("-2147483648", 0);
		return;
	}
	if (n < 0)
	{
		*len += _putchar('-');
		n = -n;
	}
	if (n >= 0 && n < 10)
		*len += _putchar(n + '0');
	else
	{
		_putnbr(n / 10, len);
		_putnbr(n % 10, len);
	}
}

/**
 * _putnbr_hex - print the hex value of an int
 * @n: the number to be converted to hex
 * @isupper: flag to specify if the hex is upper or lower case
 * @base: the base to conver to
 * @len: countes the printed characters
 * Return: nothing
 */

void _putnbr_base(unsigned int n, int isupper, int base, int *len)
{
	char *base_letters;

	base_letters = isupper ? "0123456789ABCDEF" : "0123456789abcdef";
	if (n < (unsigned int) base)
		*len += _putchar(base_letters[n]);
	else
	{
		_putnbr_base(n / base, isupper, base, len);
		_putnbr_base(n % base, isupper, base, len);
	}
}
