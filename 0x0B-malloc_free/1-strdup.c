#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to new string
 */
char *_strdup(char *str)
{
	int x;
	int c;
	char *t;

	if (str == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
	{}

	t = malloc(sizeof(char) * c + 1);

	if (t == NULL)
		return (NULL);

	for (x = 0; x < c; x++)
		t[x] = str[x];

	return (t);
}
