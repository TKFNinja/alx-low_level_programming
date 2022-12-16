#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 *
 * Return: the square and a new line if the size is 0 or less
*/

void print_square(int size)
{
	int i = 0;
	int k = 0;

	if (size > 0)
	{
		while (k < size)
		{
			i = 0;
		
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			k++;
		}
	}
	else
		_putchar('\n');
}	
