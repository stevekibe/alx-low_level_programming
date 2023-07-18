#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog 
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newdog;
    int x, len = 0, len1 = 0;
    char *y, *z;

    x = 0;

    while(name[x] != '\0')
    {
        len++;
        x++;
    }
    while(name[x] != '\0')
    {
        len1++;
        x++;
    }

    newdog = malloc(sizeof(dog_t));
    if (newdog == NULL)
    {
        return (NULL);
    }

    y = malloc((len + 1) * sizeof(char));
    if (y == NULL)
    {
        free(newdog);
        return (NULL);
    }
    for (x = 0; x < len; x++)
    {
        y[x] = name[x];
    }
    y[x] = '\0';
    newdog->name = y;
    newdog->age = age;
    z = malloc((len1 + 1) * sizeof(char));
    if (z == NULL)
    {
        free(y);
        free(newdog);
        return (NULL);
    }
    for (x = 0; x < len; x++)
    {
        y[x] = owner[x];
    }
    y[x] = '\0';
    newdog->owner = y;
    return (newdog);
}