#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: array of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int cents = 0;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}
		int coins;

		coins = atoi(argv[argc - 1]);
        while (coins > 0)
		{
			if (coins % 25 == 0)
			{
				coins -= 25;
			} else if (coins % 10 == 0)
			{
				coins -= 10;
			} else if (coins % 5 == 0)
			{
				coins -= 5;
			} else if (coins % 2 == 0)
			{
				coins -= 2;
			} else
			{
				coins--;
			}
			cents++;
		}
		printf("%d\n", cents);
		return (0);
	}
	printf("Error\n");
	return (1);
}