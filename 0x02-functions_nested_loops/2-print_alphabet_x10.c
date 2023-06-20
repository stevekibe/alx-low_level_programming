#include "main.h"
/**
 * print_alphabet_x10 - start of code execution
 *
 * Return: is always false 0
 *
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a <= 9)
	{
		for (b = 'a'; b <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}
}
