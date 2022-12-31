#include "main.h"
/**
 * times_table - prints the n time table
 * Returns: ntimes table
*/

void print_times_table(int n)
{
	int i, j;
	
	if (n <= 15 && n >= 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				if ((i * j) < 10)
				{
					_putchar((i * j) + '0');
				}
				else if ((i * j) < 100)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					_putchar(((i * j) / 100) + '0');
					_putchar(((i * j) % 100) / 10 + '0');
					_putchar(((i * j) % 10) + '0');
				}

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
