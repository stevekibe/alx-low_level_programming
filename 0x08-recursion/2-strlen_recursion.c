#include "main.h"
/**
 * _strlen_recursion - recurssion string length
 * @s: character to recurse
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s)
	{
		z = _strlen_recursion(s + 1);
		return (z += 1);
	}
	return (0);
}
