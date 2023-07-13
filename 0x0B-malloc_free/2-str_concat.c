#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatnates strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
*/
char *str_concat(char *s1, char *s2)
{
    char *x; 
    int a = 0, a1 = 0, a2 = 0;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s1 = "";
    }

    while (s1[a] != '\0')
    {
        a++;
        a1++;
    }

    a = 0;

    while (s2[a] != '\0')
    {
        a++;
        a2++;
    }

    x = malloc(sizeof(char) * (a1 + a2 + 1));
    if (x == NULL)
    {
        return (NULL);
    }
    for (a = 0; a < a1; a++)
    {
        x[a] = s1[a];
    }
    for (a = 0; a < a2; a++)
    {
        x[a + a1] = s2[a];
    }
    x[a + a1] = '\0';
    return (x);      
    

}
