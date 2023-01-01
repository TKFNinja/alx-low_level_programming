#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	long int Fibo1 = 1;
	long int n = 0;
	long int Fibo2 = 1;
	int m = 0;

	while (m < 50)
	{
		n = Fibo2;
		Fibo2 = Fibo2 + Fibo1;
		Fibo1 = n;
		printf("%ld, ", Fibo1);
		m++;
	}
	printf("\n");
	return (0);
}
