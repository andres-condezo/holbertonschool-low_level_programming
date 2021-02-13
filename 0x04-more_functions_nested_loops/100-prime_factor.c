#include <stdio.h>
/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: Void
 */
int main (void)
{
	long long int n, primo, max;

	primo = 2;
	n = 612852475143;

	while (n > 1)
	{
		if (n % primo == 0)
		{
			max = primo;
			n = n / primo;

		}
		else
		{
			primo++;
		}

	}

printf("%lli\n", max);
return (0);
}
