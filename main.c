#include "main.h"

#include <stdio.h>
#include <limits.h>

// int main(void)
// {
// 	int a = 0, b = 0;

// 	/* ========================= */
// 	/* 			%d CASES		 */
// 	/* ========================= */
// 	printf("======================\n");
// 	printf("****** d CASES ******\n");
// 	printf("======================\n");
// 	a = printf("Expected output:    %d\n", 1134001);
// 	b = _printf("Current output:     %d\n", 1134001);
// 	printf("Expected length:    %d\n", a);
// 	printf("Current length:     %d\n", b);
// 	a = printf("Expected output:    %d\n", -4567);
// 	b = _printf("Current output:     %d\n", -4567);
// 	printf("Expected length:    %d\n", a);
// 	printf("Current length:     %d\n", b);
// 	a = printf("Expected output:    %d\n", 0);
// 	b = _printf("Current output:     %d\n", 0);
// 	printf("Expected length:    %d\n", a);
// 	printf("Current length:     %d\n", b);
// 	a = printf("Expected output:    %d\n", INT_MAX);
// 	b = _printf("Current output:     %d\n", INT_MAX);
// 	printf("Expected length:    %d\n", a);
// 	printf("Current length:     %d\n", b);
// 	a = printf("Expected output:    %d\n", INT_MIN);
// 	b = _printf("Current output:     %d\n", INT_MIN);
// 	printf("Expected length:    %d\n", a);
// 	printf("Current length:     %d\n", b);

// 	/* ========================= */
// 	/* 			%i CASES		 */
// 	/* ========================= */
// 	printf("======================\n");
// 	printf("****** i CASES ******\n");
// 	printf("======================\n");
// 	a = printf("Expected output:    %i\n", 237482);
// 	b = _printf("Current output:     %i\n", 237482);
// 	printf("Expected length:    %i\n", a);
// 	printf("Current length:     %i\n", b);
// 	a = printf("Expected output:    %i\n", -328472);
// 	b = _printf("Current output:     %i\n", -328472);
// 	printf("Expected length:    %i\n", a);
// 	printf("Current length:     %i\n", b);
// 	a = printf("Expected output:    %i\n", 0);
// 	b = _printf("Current output:     %i\n", 0);
// 	printf("Expected length:    %i\n", a);
// 	printf("Current length:     %i\n", b);
// 	a = printf("Expected output:    %i\n", INT_MAX);
// 	b = _printf("Current output:     %i\n", INT_MAX);
// 	printf("Expected length:    %i\n", a);
// 	printf("Current length:     %i\n", b);
// 	a = printf("Expected output:    %i\n", INT_MIN);
// 	b = _printf("Current output:     %i\n", INT_MIN);
// 	printf("Expected length:    %i\n", a);
// 	printf("Current length:     %i\n", b);
// 	return (0);
// }
int main(void)
{
	int a = 0, b = 0;

	// /* ========================= */
	// /* 			%c CASES		 */
	// /* ========================= */
	// printf("======================\n");
	// printf("****** c CASES ******\n");
	// printf("======================\n");
	// a = printf("Expected output:    %cAAA\n", 'a');
	// b = _printf("Current output:     %cAAA\n", 'a');
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %cc\n", 'a');
	// b = _printf("Current output:     %cc\n", 'a');
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// // a = printf("Expected output:    %yd\n");
	// // b = _printf("Current output:     %yd\n");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %c\n", 53);
	// b = _printf("Current output:     %c\n", 53);
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %c\n", '\0');
	// b = _printf("Current output:     %c\n", '\0');
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %%%c\n", 'y');
	// b = _printf("Current output:     %%%c\n", 'y');
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);

	// /* ========================= */
	// /* 			%s CASES		 */
	// /* ========================= */
	// printf("======================\n");
	// printf("****** s CASES ******\n");
	// printf("======================\n");
	// a = printf("Expected output:    %s\n", "Holberton");
	// b = _printf("Current output:     %s\n", "Holberton");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %s$\n", "");
	// b = _printf("Current output:     %s$\n", "");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %s\n", "hello, world");
	// b = _printf("Current output:     %s\n", "hello, world");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %s$\n", NULL);
	// b = _printf("Current output:     %s$\n", NULL);
	// printf("Expected length:    %i\n", a);
	// printf("Current length:     %i\n", b);
	// a = printf("Expected output:    %sschool\n", "Holberton");
	// b = _printf("Current output:     %sschool\n", "Holberton");
	// printf("Expected length:    %i\n", a);
	// printf("Current length:     %i\n", b);

	// /* ========================= */
	// /* 			% CASES		 */
	// /* ========================= */
	// printf("===========================\n");
	// printf("****** PERCENT CASES ******\n");
	// printf("===========================\n");
	// a = printf("Expected output:    %%\n");
	// b = _printf("Current output:     %%\n");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("Expected output:    %%%%\n");
	// b = _printf("Current output:     %%%%\n");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// printf("Expected output:    ");
	// // a = printf("%");
	// printf("\n");
	// printf("Current output:     ");
	// // b = _printf("%");
	// printf("\n");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// a = printf("%   ");
	// printf("\n");
	// printf("Current output:     ");
	// b = _printf("%   ");
	// printf("\n");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// printf("Expected output:    ");
	// a = printf("test%");
	// printf("\n");
	// printf("Current output:     ");
	// b = _printf("test%");
	// printf("\n");
	// printf("Expected length:    %d\n", a);
	// printf("Current length:     %d\n", b);
	// printf("Expected output:    ");
	a = printf("%", "valid format");
	printf("\n");
	printf("Current output:     ");
	b = _printf("%", "valid format");
	printf("\n");
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	return (0);
}
