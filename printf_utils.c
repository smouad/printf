#include "main.h"

/**
 * _putchar - prtins a single a character
 * @c: the character to be printed
 * Return: returns 1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - prints a string and non printable hex values
 * @s: the string to be printed
 * @all: weather to print non printables or not
 * Return: returns the size of the string
 */

int _putstr(char *s, int all)
{
	int i = 0;
	int len = 0;

	if (!s)
		s = "(null)";
	while (s[i])
	{
		if (((s[i] > 0 && s[i] < 32) || s[i] >= 127) && all)
		{
			len += _putchar('\\');
			len += _putchar('x');
			if (s[i] < 16)
				len += _putchar('0');
			_putnbr_base((unsigned int)s[i], 0, 16, &len);
		}
		else
			len += _putchar(s[i]);
		i++;
	}
	return (len);
}

/**
 * _putrev - prints the reverse string
 * @str: the string in hand
 * Return: the number of chars in string
 */

int _putrev(char *str)
{
	int i = 0;
	int len = 0;

	if (!str)
		return (_putstr("(null)", 0));
	while (str[i])
		i++;
	while (i--)
		len += _putchar(str[i]);
	return (len);
}

/**
 * _putrot13 - prints the rotated string
 * @str: the string in hand
 * Return: number of printed characters
 */

int _putrot13(char *str)
{
	int i = 0;
	int len = 0;

	if (!str)
		return (_putstr("(null)", 0));
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			len += _putchar((((str[i] - 'a') + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			len += _putchar((((str[i] - 'A') + 13) % 26) + 'A');
		else
			len += _putchar(str[i]);
		i++;
	}
	return (len);
}
