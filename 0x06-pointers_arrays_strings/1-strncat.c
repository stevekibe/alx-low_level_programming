#include "main.h"
/**
 * _strncat - concats two strings
 * @dest: destination of concat
 * @src: source of array
 * @n: number of times to append
 * Return: char value dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x,y;

	x = 0;
	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] ; y++)
		dest[x++] = src[y];

	return (dest);
}
