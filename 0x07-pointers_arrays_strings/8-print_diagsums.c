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
	int i, sum1, sum2 = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				sum1 = sum1 + a[i][j];
			if (i + j == size - 1)	
				sum2 = sum2 + a[i][j];
			j++;
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
