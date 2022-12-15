#include "main.h"
/**
 * main - check the code
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _isupper(int c)
{
	int alphabet = 'A';

	while (alphabet <= 'Z')
	{
		if (c == alphabet) 
		{
			return (1);
		}
		else
			alphabet++;
	}
	return (0);
}

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
