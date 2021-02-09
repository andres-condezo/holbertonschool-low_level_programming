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
		for (fac2 = 0; fac2 <= 9; fac2++)
		{
			prod = fac1 * fac2;

			if (prod > 9)
			{
				prodD = prod / 10;
				prodU = prod % 10;

				if (fac2 != 9)
				{
					_putchar(prodD + '0');
					_putchar(prodU + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(prodD + '0');
					_putchar(prodU + '0');
					_putchar(10);
				}
			}
			else
			{
				if (fac2 != 9)
				{
					_putchar(prod + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(prod + '0');
					_putchar(10);
				}
			}
		}
	}
}
