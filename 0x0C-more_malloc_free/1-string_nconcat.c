#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats two strings
 * @s1: string
 * @s2: string
 * @n: amount of bytes
 * Return: null or charactere value
 * 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int a, a1, a2;
    char *p;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s1 = "";
    }

    a1 = 0;
    a2 = 0;
    while (s2[a2] != '\0')
    {
        a2++;
    }
    while (s1[a1] != '\0')
    {
        a1++;
    }

    if (n >= a2)
    {
        n = a2;
    }

    p = malloc(sizeof(char) * n + a1 + 1);
    if (p == NULL)
    {
        return (NULL);
    }
    for (a = 0; a < a1; a++)
    {
        p[a] = s1[a];
    }
    for (a = 0; a < n; a++)
    {
        p[a + a1] = s2[a];
    }
    p[a + a1] = '\0';

    return (p);
}
