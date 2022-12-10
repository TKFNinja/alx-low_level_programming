#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n = 0;
	char alphabet = 'a';

	while (n < 16)
	{
		if (n >= 10)
		{
			putchar(alphabet);
			alphabet++;
		}
		else
		{
			putchar((n % 16) + '0');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
