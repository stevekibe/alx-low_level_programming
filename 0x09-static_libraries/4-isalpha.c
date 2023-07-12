#include "main.h"
/**
 * _isalpha - start of code
 *
 * @c: for comparison
 *
 * Return: either 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
