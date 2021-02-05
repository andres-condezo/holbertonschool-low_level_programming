#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99.
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{

				if (i <= j && j <= k)
				{
					if (i != j && j != k)
					{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == '7' && j == '8' && k == '9')
					{
					putchar('\n');
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}

			}
		}
	}
		return (0);
}
