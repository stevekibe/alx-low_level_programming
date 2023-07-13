#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size
 * Return: null or pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int x;
    char *y;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    y = malloc(nmemb * size);
    if (y == NULL)
    {
        return (NULL);
    }

    x = 0;

    while(x < nmemb * size)
    {
        y[x] = 0;
        x++;
    }
    return (y);
}
