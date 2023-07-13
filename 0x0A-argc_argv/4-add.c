#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main functiom.
 * @argc: counts arguments.
 * @argv: array of arguments.
 * Return:Always 0.
 */
int main(int argc, char *argv[])
{
	int b, a, add = 0;

	for (b = 1; b < argc; b++)
	{
		for (a = 0; argv[b][a] != '\0'; a++)
		{
			if (!isdigit(argv[b][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[b]);
	}
	printf("%d\n", add);
	return (0);
}
