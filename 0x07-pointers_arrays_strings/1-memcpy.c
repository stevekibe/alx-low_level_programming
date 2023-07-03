/**
 * _memcpy - copies the values
 * @dest: destination 
 * @src: source
 * @n: number of times
 * Return: string value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int y;
    y = 0;

    while (y < n)
    {
        dest[y] = src[y];
        y++;
    }
    return (dest);
}