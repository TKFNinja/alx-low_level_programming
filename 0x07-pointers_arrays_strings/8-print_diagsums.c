#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: matrix
 * @size: matrix size
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2 = 0;

	while (i < size)
	{
		sum1 = sum1 + a[i][i];
		sum2 = sum2 + a[i][size - 1 - i];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
