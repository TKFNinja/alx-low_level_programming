#include <unistd.h>
#include "main.h"
/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	print_triangle(1);
	print_triangle(2);
	print_triangle(10);
	print_triangle(0);
	return (0);
}
