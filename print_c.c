#include "main.h"

/**
 * print_c - a punction that print_s a char @c to the stdout
 * @c: the char to print_
 * @count:a pointer to int that gonna increment
 * buy 1 each time we print_ a char
 * Return: void
 */

void print_c(int c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
