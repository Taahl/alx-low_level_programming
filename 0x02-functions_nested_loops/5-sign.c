#include "main.h"
/**
 * print_sign - show + if positive - if negative and 0 if 0
 * @n: number
 *
 * Return: + - or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
