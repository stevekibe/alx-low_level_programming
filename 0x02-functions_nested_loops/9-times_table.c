#include "main.h"
/**
 * times_table - start point
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <=9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int product = x * y;

			if (y == 0)
				_putchar('0');
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
