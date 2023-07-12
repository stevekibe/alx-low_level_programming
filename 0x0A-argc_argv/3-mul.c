#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arguments
 * @argv: array of arguments
 *Return:always 0 or 1
 */
int main(int argc, char  *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
    else
    {
        printf("Error\n");
    }
	return (1);
}