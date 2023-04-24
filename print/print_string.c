#include "main.h"

void print_S(char *str, int *count)
{
	int i;

	str = !str ? "(null)" : str;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			print_s("\\x0", count);
			_putnbr_base(str[i], 16, 'X', count);
				i++;
			if (str[i] == '\0')
			return;
		}
		_putchar(str[i], count);
	}
}