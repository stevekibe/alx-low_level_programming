#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - main function
 * @array: array to go through
 * @size: size of array
 * @cmp: function to do something with size
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]))
			return (y);
	}
	return (-1);
}
