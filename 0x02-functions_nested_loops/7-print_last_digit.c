#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - start of code
 *
 * @b: used for comparison
 *
 * Return: the last digit 
 *
 */
int print_last_digit(int b)
{
	_putchar('0' + _abs(b % 10));
	return (_abs(b % 10));
}
