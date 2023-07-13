#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrays
 * @max: max of arrays
 * Return: int value
*/
int *array_range(int min, int max)
{
    int x , length;
    int *y;

    if (min > max)
    {
        return (NULL);
    }
    length = 0;
    x = min;
    while (x <= max)
    {
        length++;
        x++;
    }

    y = malloc(sizeof(int) * length);
    if (y == NULL)
    {
        return (NULL);
    }

    x = 0;
    while (min <= max)
    {
        y[x] = min;
        x++;
        min++;
    }
    return (y);    
}
