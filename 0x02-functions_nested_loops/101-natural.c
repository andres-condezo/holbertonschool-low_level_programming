#include <stdio.h>
/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: Void
 */
int main(void)
{
	int i;
	int sum;

	for(i = 1; i < 1024; i++)
	{
		if((i % 3) == 0|| (i % 5) == 0)
		{
			sum = sum + i;
		}
	}


	return (0);
}
