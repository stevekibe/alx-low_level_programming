/**
 * _memset - sets the momory of the array
 * @s: array to set
 * @b: value to set it as
 * @n: number of times to set
 * Return: value of s
*/
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int x;

    for (x = 0; x < n; x++)
        s[x] = b;
    return (s);
}