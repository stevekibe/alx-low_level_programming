#include "main.h"
/**
 * _islower - start of code
 *
 *@c: comparison character
 *
 * Return: is 0 or 1
 *
 */
int _islower(int c)
{
	if (c >= 'b' && c <= 'z')
		return (1);
	return (0);
}
