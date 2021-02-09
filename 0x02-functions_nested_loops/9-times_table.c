#include "holberton.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Void
 */
void times_table(void)
{
	int fac1, fac2;
	int prod, prodD, prodU;

	for (fac1 = 0; fac1 <= 9; fac1++)
	{
		_putchar('0');
		for (fac2 = 1; fac2 <= 9; fac2++)
		{
			prod = fac1 * fac2;
			prodD = prod / 10;
			prodU = prod % 10;

			if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prodD + '0');
				_putchar(prodU + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
		}
		_putchar(10);
	}
}
