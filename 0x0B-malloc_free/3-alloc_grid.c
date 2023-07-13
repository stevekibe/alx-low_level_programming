#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer 
 */
int **alloc_grid(int width, int height)
{
	int **gr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gr = (int **)malloc(sizeof(int *) * height);
	if (gr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gr[i] = (int *)malloc(sizeof(int) * width);
		if (gr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gr[j]);
			}
			free(gr);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gr[i][j] = 0;

	return (gr);
}