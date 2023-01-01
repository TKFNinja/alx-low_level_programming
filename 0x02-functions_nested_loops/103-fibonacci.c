#include <stdlib.h>
#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
*/

int main(void)
{
	long int Fibo1 = 1;
	long int n = 0;
	long int Fibo2 = 1;
	long int sum = 0;

	while (Fibo2 < 4000000)
	{
		n = Fibo2;
		Fibo2 = Fibo2 + Fibo1;
		Fibo1 = n;
		if (Fibo1 % 2 == 0)
			sum = sum + Fibo1;
		if (Fibo2 % 2 == 0)
			sum = sum + Fibo2;
	}
	printf("%ld\n", sum);
	return (0);
}
