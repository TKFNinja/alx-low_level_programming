#include "main.h"
/**
 * main - Entry point
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _putstring(char text[100])
{
	int i = 0;
	
	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
}

int main(void)
{
	_putstring("_putchar");
	_putchar('\n');
	return (0);
}
