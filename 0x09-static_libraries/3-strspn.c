/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix 
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		b= 0;
		c= 1; /*flag status*/
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0; /*success*/
				break;
			}
			b++;
		}
		if (c == 1)
			break;
		a++;
	}

	return (a);
}