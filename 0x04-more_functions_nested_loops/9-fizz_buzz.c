#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100.
 *
 * Return: 0 success.
 */

int main(void)
{

	int i;

	printf("1");



	for (i = 2; i <= 100; i++)
	{

		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf(" FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");
	return (0);
}
