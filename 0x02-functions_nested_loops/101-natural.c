#include <stdio.h>
/**
 * main - start of code
 *
 * Return: is false 0
 *
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", x);
	return (0);
}
