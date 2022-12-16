#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line. But for
 * multiples of three print Fizz instead of the number and for the 
 * multiples of five print Buzz. For numbers which are multiples of both 
 * three and five print FizzBuzz.
 *
 * Return: 0
*/

void _putstring(char text[100])
{
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			_putstring("Fizz ");
		}
		else
		{
			if (i % 5 == 0)
			{
				_putstring("Buzz ");
			}
			else
			{
				if ((i % 3 == 0) && (i % 5 == 0))
				{
					_putstring("FizzBuzz ");
				}
				else
				{
					_putstring(i + '0');
					_putstring(' ');
				}
			}
		}
	}
}
