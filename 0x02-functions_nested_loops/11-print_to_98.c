#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: the number to start with
 *
 * Return: All the numbers
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}

