#include "main.h"

void print_r(char *str, int *count)
{
	int len;
	
	if (!str)
	{
		write(1, "(null)", 6);
		(*count) += 6;
		return;
	}

	for (len = 0; str[len]; len++)
	;

	while (len--)
		print_c(str[len], count);
}
