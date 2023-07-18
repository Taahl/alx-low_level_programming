#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: nothing (Void)
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a < 11; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}		
