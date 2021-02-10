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
	int prodC, prodD, prodU;

	if (!(n == 0 || n > 15))
	{
		for (fac1 = 0; fac1 <= n; fac1++)
		{
			_putchar('0');
			for (fac2 = 1; fac2 <= n; fac2++)
			{
				if ((fac1 * fac2) > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prodC = ((fac1 * fac2) / 100) + '0');
					_putchar(prodD = ((((fac1 * fac2) % 100) - prodU) / 10) + '0');
					_putchar(prodU = ((fac1 * fac2) % 10) + '0');
				}
				else if ((fac1 * fac2) > 9 && (fac1 * fac2) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prodD = ((fac1 * fac2) / 10)  + '0');
					_putchar(prodU = ((fac1 * fac2) % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((fac1 * fac2) + '0');
				}
			}
			_putchar(10);
		}
	}
}
