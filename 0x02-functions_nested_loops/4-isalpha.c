#include "main.h"
/**
 * _isalpha - prints 1 if letter 0 if other
 * @c: character ascii
 *
 * Return: 1 if letter 0 else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
