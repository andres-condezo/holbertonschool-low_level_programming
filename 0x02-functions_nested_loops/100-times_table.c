#include "holberton.h"
/**
 * print_times_table - Prints
 * the n times table, starting with 0.
 * @n: Second factor number.
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int fac1, fac2;
	int prod, prodC, prodD, prodU;

	if (n == 0 || n > 15)
	{

	}
	else
	{
		for (fac1 = 0; fac1 <= n; fac1++)
		{
			_putchar('0');
			for (fac2 = 1; fac2 <= n; fac2++)
			{
				prod = fac1 * fac2;

				if (prod > 99)
				{
					prodU = prod % 10;
					prodD = ((prod % 100) - prodU ) / 10;
					prodC = prod / 100;
					_putchar(',');
					_putchar(' ');
					_putchar(prodC + '0');
					_putchar(prodD + '0');
					_putchar(prodU + '0');
				}
				else if (prod > 9 && prod <= 99)
				{
					prodD = prod / 10;
					prodU = prod % 10;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prodD + '0');
					_putchar(prodU + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
			}
			_putchar(10);
		}

	}
}
