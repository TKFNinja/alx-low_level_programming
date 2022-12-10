#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	for (10 <= n < 16)
	{
		putchar(n % 16);
	}
	putchar('\n');
	return (0);
}
