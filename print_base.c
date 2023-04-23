#include "main.h"

void print_base(long int nbr, int base, char spes, char flag, int *count)
{
	char *small = "0123456789abcdef";
	char *big = "0123456789ABCDEF";
	char *list;

	if (flag == 'h')
		nbr = (short int)nbr;

	if (spes == 'u' || spes == 'o'\
	|| spes == 'x' || spes == 'X')
		nbr = (unsigned int)nbr;

	list = spes == 'x' ? small : big;

	if ((flag == '+' || flag == ' ') && base == 10)
	{
		print_c(flag, count);
		flag = 'x';
	}

	if (nbr < 0)
	{
		print_c('-', count);
		nbr = -nbr;
	}

	if (nbr < base)
		print_c(list[nbr], count);
	
	else
	{
		print_base(nbr / base, base, spes, flag, count);
		print_base(nbr % base, base, spes, flag, count);
	}
}
