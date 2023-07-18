#include "main.h"
/**
 * _islower - print 1 if lower case 0 for others
 *@c: character to check if lower case or not
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
