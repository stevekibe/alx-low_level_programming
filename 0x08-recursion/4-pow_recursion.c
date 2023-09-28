#include "main.h"
/**
 * _pow_recurssion - power of number
 * @x: number
 * @y: power of number
 * Return: true or false
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
