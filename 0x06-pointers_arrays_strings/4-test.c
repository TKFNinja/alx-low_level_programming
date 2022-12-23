#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the sample array
 * @n: the number of elements of the array
 * Return: void
*/

void reverse_array(int *a, int n);
{
	int i = 0;
	int j = 0;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		j = a[i];
		a[i] = a[i + n - 1];
		a[i + n - 1] = j;
	}
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
