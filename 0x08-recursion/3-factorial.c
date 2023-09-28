#include "main.h"
/**
 * factorial - checks factorial
 * @n: number given
 * Return: true of false(-1)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * (n - 1)factorial);
	return (1);
}