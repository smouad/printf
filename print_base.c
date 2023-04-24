#include "main.h"

void print_base(unsigned int nbr, unsigned int base, char spes, int *count)
{
	char *lower = "0123456789abcdef";
	char *upper = "0123456789ABCDEF";
	char *list;

	list = spes == 'X' ? upper : lower;


	if (nbr < 0)
	{
		print_c('-', count);
		nbr = -nbr;
	}

	if (nbr < base)
		print_c(list[nbr], count);
	
	else
	{
		print_base((nbr / base), base, spes, count);
		print_base((nbr % base), base, spes,count);
	}
}
