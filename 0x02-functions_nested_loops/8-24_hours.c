#include "main.h"
/**
 * jack_bauer - start
 *
 */
void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	while (x <= 23)
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
		x++;
	}

}

