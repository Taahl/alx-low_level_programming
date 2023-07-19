#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number from which last digit will be taken
 *
 * Return: last digito
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 10)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
