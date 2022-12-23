#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the sample array
 * @n: the number of elements of the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int m = 0;

	if ((n % 2) == 0)
	{
		j = n - 1;

		for (i = 0 ; i < n / 2 ; i++)
		{
			m = a[i];
			a[i] = a[j];
			a[j] = m;
			j--;
		}
	}
	else
	{
		j = n - 1;

		for (i = 0 ; i < (n - 1) / 2 ; i++)
		{
			m = a[i];
			a[i] = a[j];
			a[j] = m;
			j--;
		}
	}
}
