#include "main.h"
/**
 * print_line - draws a straight line
 * @n: The number of \ to print
 * Return: a diagonal line
*/

void print_diagonal(int n)

{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('\\');
			_putchar('\n');

			if (n > 0)
			{
				_putchar(' ');
			}
		}
	}
}
