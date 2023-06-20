#include "main.h"

/**
 * print_alphabet - start of program
 *
 * Return: is always false
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
