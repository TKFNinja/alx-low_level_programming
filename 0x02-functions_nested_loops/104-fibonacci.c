#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	unsigned long Fibo1 = 1;
	unsigned long n = 0;
	unsigned long Fibo2 = 1;
	int m = 0;

	while (m < 98)
	{
		n = Fibo2;
		Fibo2 = Fibo2 + Fibo1;
		Fibo1 = n;
		if (m < 97)
			printf("%ld, ", Fibo1);
		if (m == 97)
			printf("%ld", Fibo1);
		m++;
	}
	printf("\n");
	return (0);
}
