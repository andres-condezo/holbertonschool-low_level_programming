#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print last digit
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last-digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last-digit = n % 10;

	if (last-digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last-digit);
	}
	else if (last-digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last-digit);
	}
	else if (last-digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last-digit);
	}
	return (0);
}
