#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array of ints, then a new line.
 * @a: the array to be printed
 * @n: the number of elements of the array to be printed
 * Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
