#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	char c;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	for (c = 0 ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
