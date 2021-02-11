#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long i;
	unsigned long add1 = 1;
	unsigned long add2 = 2;
	unsigned long sum;

	printf("%ld, %ld", add1, add2);
	for (i = 0; i <= 98; i++)
	{
		sum = add1 + add2;
		add1 = add2;
		add2 = sum;
		printf(", %lu", sum);
	}

	printf("\n");

	return (0);
}
