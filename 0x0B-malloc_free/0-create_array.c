#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array
 * @c: char to initialize with?
 * Return: char value
*/
char *create_array(unsigned int size, char c)
{
    char *y;
    unsigned int z;

    if (size <= 0)
    {
        return (NULL);
    }
    y = (char *) malloc(sizeof(char) * size);

    if (y == NULL)
    {
        return (NULL);
    }
    for (z = 0; z < size; z++)
    {
        y[z] = c;
    }

    return (y);
}