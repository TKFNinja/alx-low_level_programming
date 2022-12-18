#include "main.h"
/**
 * main - Entry point
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int i = 0;
	char text[] = "_putchar";
	
	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
