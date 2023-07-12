#include "main.h"
/**
 * _memset - sets the memory of the array
 * @s: array to set
 * @b: value to set it as
 * @n:  n number of times to set
 * Return: char value of s
*/
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int x;

    for (x = 0; x < n; x++)
    {
        s[x] = b;
    }
    return (s);
}