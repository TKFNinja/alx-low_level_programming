#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
