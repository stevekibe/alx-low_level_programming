#include "main.h"
/**
 * jack_bauer - start
 *
 */
void jack_bauer(void)
{
	int x;
	int y = 0;

	for (x = 0; x <= 23 ; x++)
	{
		while (y <= 59)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
			y++;
		}
	}

}

