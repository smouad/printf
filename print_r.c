#include "main.h"

void print_r(char *str, int *count)
{
	int len;

	for (len = 0; str[len]; len++)
	;

	while (len--)
		print_c(str[len], count);
}