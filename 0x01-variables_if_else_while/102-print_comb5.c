#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99.
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int i, j;
	int n, n1, n2, n3;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			n = (i / 10);
			n1 = (i % 10);
			n2 = (j / 10);
			n3 = (j % 10);
			if (((n == n2 && n1 < n3) || n < n2))
			{
				putchar (n + '0');
				putchar (n1 + '0');
				putchar (' ');
				putchar (n2 + '0');
				putchar (n3 + '0');
				if (n != 9 || n1 != 8 || n2 != 9 || n3 != 9)
				{
					putchar (',');
					putchar (' ');
				}

			}
		}
	}
		putchar('\n');
		return (0);
}
