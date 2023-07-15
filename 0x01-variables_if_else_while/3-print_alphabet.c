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

	int N = 65;

	while (n < 123 && N < 91)
	{
		putchar(n);
		putchar(N);
		n++;
		N++;
	}
	putchar('\n');
	return (0);
}
