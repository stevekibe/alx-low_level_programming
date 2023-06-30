/**
 * _strcat -concats two arrays
 *
 * @dest: destination
 * @src: source
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
		x++;

	for (; src[y]; y++)
		dest[x++] = src[y];
	
	return (dest);
}
