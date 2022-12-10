#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n = 0;
	char hex = [a, b, c, d, e, f];

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	for (n = 10; n < 16; n++)
	{
		putchar(hex[(n % 10) + 1]);
	}
	putchar('\n');
	return (0);
}
