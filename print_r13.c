#include "main.h"

void print_R(char *str, int *count)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm')\
		|| (str[i] >= 'A' && str[i] <= 'M'))
			print_c(str[i] + 13, count);

		else if ((str[i] >= 'n' && str[i] <= 'z')\
		|| (str[i] >= 'N' && str[i] <= 'Z'))
			print_c(str[i] - 13, count);
		else
			print_c(str[i], count);
	}
}
