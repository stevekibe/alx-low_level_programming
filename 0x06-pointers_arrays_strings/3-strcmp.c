/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] - s2[a] == 0 && s1[a] != '\0'; a++)
	{}

	return (s1[a] - s2[a]);

