#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: string to be searched
 * 
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i, j, k = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
