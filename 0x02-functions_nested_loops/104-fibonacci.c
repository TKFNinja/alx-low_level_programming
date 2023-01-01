#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	float Fibo1 = 1;
	float n = 0;
	float Fibo2 = 1;
	int m = 0;

	while (m < 98)
	{
		n = Fibo2;
		Fibo2 = Fibo2 + Fibo1;
		Fibo1 = n;
		if (m < 97)
			printf("%f, ", Fibo1);
		if (m == 97)
			printf("%f", Fibo1);
		m++;
	}
	printf("\n");
	return (0);
}
