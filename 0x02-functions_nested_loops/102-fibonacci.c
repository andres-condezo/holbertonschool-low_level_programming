#include <stdio.h>
/**
 * main - Prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	long add1 = 1;
	long add2 = 2;
	long sum;

	printf("%ld, %ld", add1, add2);
	for (i = 0; i <= 47; i++)
	{
		sum = add1 + add2;
		add1 = add2;
		add2 = sum;
		printf(", %ld", sum);
	}

	printf("\n");

	return (0);
}
