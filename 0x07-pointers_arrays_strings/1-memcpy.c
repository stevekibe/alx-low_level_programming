/**
 * _memcpy - copies the values
 * @dest: destination 
 * @src: source
 * @n: number of times
 * Return: sring value
 * 
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int y = 0;

    while (y < n)
    {
        dest[y] = src[y];
        y++;
    }
    return (dest);
}