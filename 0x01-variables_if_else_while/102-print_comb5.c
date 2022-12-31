#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n, m = 0;

	while (n < 100)
	{
		m = 0;
		while (m < 100)
		{
			if (m > n)
			{
				putchar(n / 10 + '0');
                		putchar(n % 10 + '0');
                		putchar(' ');
				putchar(m / 10 + '0');
				putchar(m % 10 + '0');
				
				if (n < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
