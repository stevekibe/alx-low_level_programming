#include <stdio.h>
/**
 * main - start of code
 *
 * Return: is always false 0
 *
 */
int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
