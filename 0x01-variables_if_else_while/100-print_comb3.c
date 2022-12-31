#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 100)
	{
		if (n / 10 < n % 10)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
