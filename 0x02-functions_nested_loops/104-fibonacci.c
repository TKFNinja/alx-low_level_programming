#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	long double Fibo1 = 1;
	long double n = 0;
	long double Fibo2 = 1;
	int m = 0;

	while (m < 98)
	{
		n = Fibo2;
		Fibo2 = Fibo2 + Fibo1;
		Fibo1 = n;
		if (m < 97)
			printf("%.0Lf, ", Fibo1);
		if (m == 97)
			printf("%.0Lf", Fibo1);
		m++;
	}
	printf("\n");
	return (0);
}
