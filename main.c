#include "main.h"

int main()
{
	int count = 0;
	// print_c('M', &count);
	// printf("\n%d\n", count);
	// count = 0;
	// print_s("Mouad", &count);
	// printf("\n%d\n", count);
	// count = 0;
	// print_d(-1337, &count);
	// printf("\n%d\n", count);
	// count = 0;
	// print_b(98, &count);
	// printf("\n%d\n", count);
	// printf("%X\n", 10);
	// print_r("mouad sodor MOUAD SODOR", &count);
	printf("%hx\n", 214748364);
	print_base(214748364, 16, 'x', 'h', &count);
}