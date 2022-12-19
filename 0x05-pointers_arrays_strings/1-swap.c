#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: one of the integers to be swapped
 * @b: one of the integers to be swapped
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

