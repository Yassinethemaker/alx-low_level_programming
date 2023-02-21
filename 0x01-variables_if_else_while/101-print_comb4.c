#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, x, z;

	for (n = 0 ; n < 9 ; n++)
	{
		for (x = n + 1 ; x <= 8 ; x++)
		{
			for (z = x + 1 ; z <= 9 ; z++)
			{
			putchar((n % 10) + '0');
			putchar((x % 10) + '0');
			putchar((z % 10) + '0');

			if (n == 7 && x == 8 && z == 9)
			continue;

			putchar(',')
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
