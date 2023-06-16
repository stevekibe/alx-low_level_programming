#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
 * main -entry point of code
 *
 * Return:is 0 false
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, lastn);
	} else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	} else
	{
		printf("Last digit of %d is %d and is les than 6 and not 0\n", n, lastn);
	}
	return (0);
}
