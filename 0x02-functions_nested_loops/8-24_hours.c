#include "main.h"
/**
 * jack_bauer - prints minutes 24h
 *
 * Return: none since void
 */
void jack_bauer(void)
{
	int x, y, z, t;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (t = 0; t <= 9; t++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(z + 48);
					_putchar(t + 48);
					_putchar('\n');
				}
			}
		}
	}
}
