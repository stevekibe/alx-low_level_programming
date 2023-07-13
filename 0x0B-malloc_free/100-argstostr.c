#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - gives array of args
 * @ac: argument count
 * @av: array of arguments
 * Return: char value
 */
char *argstostr(int ac, char **av)
{
	int size;
	char *arr;
	int x, y, z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			size++;
	}

	size += (ac + 1);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			arr[z] = av[x][y];
			z++;
		}
		arr[z] = '\n';
		z++;
	}

	arr[z] = '\0';

	return (arr);
}