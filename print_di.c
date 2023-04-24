#include "main.h"

void print_di(long int nbr, char flag, int *count)
{
	nbr = flag == 'h' ? (short int)nbr : ((flag == 'x') ? (int)nbr : nbr);

	if (nbr < 0)
	{
		print_c('-', count);
		nbr = -nbr;
	}

	if (nbr < 10)
		print_c(nbr + '0', count);
	
	else
	{
		print_di(nbr / 10, flag, count);
		print_di(nbr % 10, flag, count);
	}
}
