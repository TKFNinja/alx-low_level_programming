#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit is required
 * Return: the last digit
*/

int print_last_digit(int n)
{
	return(_putchar((n % 10) + '0'));
}
