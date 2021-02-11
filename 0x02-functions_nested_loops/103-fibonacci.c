#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000.
 * below 1024 (excluded), followed by a new line.
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	long add1 = 1;
	long add2 = 2;
	long new_add = 0;
	long sum = 0;

	while (new_add <= 4000000)
	{
		new_add = add1 + add2;
		add1 = add2;
		add2 = new_add;

		if ((new_add % 2) == 0)
		{
			sum += new_add;
		}

	}
	printf("%ld\n", sum);

	return (0);
}
