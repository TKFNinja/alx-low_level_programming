#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 *
 * Return: the triangle or the next line
*/

void print_triangle(int size)
{
	int i = 1;
	int k = 1;

	if (size > 0)
	{
		if (size == 1)
		{
			_putchar('#');
		}
		else
		{
			for (k = 1; k <= size; k++)
			{
				while (i <= size)
				{
					if (i != size)
					{
						_putchar(' ');
					}
					else
					{
						_putchar('#');
					}
					i++;
				}
			}
		}
	}
}
