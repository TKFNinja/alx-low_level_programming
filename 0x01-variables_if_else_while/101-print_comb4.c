#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n = 11;

	while (n < 1000)
	{
		if ((n / 100 < ((n % 100) / 10)) && (((n % 100) / 10) < n % 10))
		{
			putchar(n / 100 + '0');
			putchar(((n % 100) / 10) + '0');
			putchar(n % 10 + '0');
			if (n < 789)
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
