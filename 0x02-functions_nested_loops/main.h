#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _putstring(char text[100])
{
	int i = 0;

	while text[i] != '\0'
	{
		_putchar(text[i]);
		i++;
	}
}
