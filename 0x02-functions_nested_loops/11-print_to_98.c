#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - start of code
 *
 * @n: comparison
 *
 * Return: is 0 or 1
 *
 */
void print_to_98(int n)
{
	int i;

	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	_putchar('\n');
}
