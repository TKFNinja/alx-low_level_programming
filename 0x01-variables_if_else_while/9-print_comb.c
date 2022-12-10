#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 9)
	{
		putchar(n + '0');
		putchar(", ");
		n++;
	}
	putchar(n + '0');
	putchar('\n');
	return (0);
}
