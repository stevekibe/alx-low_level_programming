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

	if (n > 98)
	{
		for (i = n; i >=98; i++)
		{
			printf("%d", i);
			if (i !=98)
			{
				printf(", ");
			}
		}
	}
	else 
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				print(", ");
			}
		}
	}
	_putchar('\n');
}
