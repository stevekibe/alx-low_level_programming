/**
 * _strncat - concats two strings
 * @dest: destination of concat
 * @src: source of array
 * @n: number of times to append
 * Return: char value dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x,y;

	x = 0;
	while (dest[x]!= '\0' )
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';

	return (dest);
}
