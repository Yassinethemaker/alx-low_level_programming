#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, x;

	for (n = 0 ; n < 9 ; n++)
	{
		for (x = n + 1 ; x <= 9 ; x++)
		{
			putchar((n % 10) + '0');
			putchar((x % 10) + '0');

			if (n == 8 && x == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
