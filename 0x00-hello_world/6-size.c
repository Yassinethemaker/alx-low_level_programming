#include <stdio.h>
/**
 * main - print the size of various types on the computer
 * return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
/* sizeof evaluates the size of a variable */
printf ("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
