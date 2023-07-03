/**
 * _strchr - locates character of a string
 * @s: string
 * @c: locates charachter of a string
 * Return:
 */
char *_strchr(char *s, char c)
{
    int x;

    for (x = 0; s[x]; x++)
    {
        if (s[x] == c)
        {
            return (s + x);
        }
    }
    if (s[x] == c)
    {
        return (s + x);
    }
    return (0);
}