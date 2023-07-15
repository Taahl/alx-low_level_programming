#include <stdio.h>
/**
 * main - Entry point
 * description: alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
