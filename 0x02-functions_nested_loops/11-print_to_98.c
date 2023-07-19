#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - natural number between n and 98 (max value)
 * @n: print from this number
 *
 * Return: Natural numbers starting from n up to 98
 */
void print_to_98(int n)
{
	int x, z;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	} else if (n >= 98)
	{
		for (z = n; z >= 98; j--)
		{
			if (z != 98)
				printf("%d, ", z);
			else if (z == 98)
				printf("%d\n", z);
		}
	}
}
