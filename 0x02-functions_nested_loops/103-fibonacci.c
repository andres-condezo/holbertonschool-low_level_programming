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
	unsigned long add1 = 1;
	unsigned long add2 = 2;
	unsigned long new_add = 0;
	unsigned long sum = 2;

	while (new_add < 4000000)
	{
		if ((new_add % 2) == 0)
		{
			sum = sum + new_add;
		}

		new_add = add1 + add2;
		add1 = add2;
		add2 = new_add;
	}

	printf("%lu\n", sum);

	return (0);
}
