#include "holberton.h"

/**
 * print_one_digit - Prints the result to one digit
 * @fac1: first factot.
 * @fac2: second factot.
 *
 * Return: Void
 */
void print_one_digit(int fac1, int fac2)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar((fac1 * fac2) + '0');
}

/**
 * print_two_digit - Prints the result to two digits
 * @fac1: first factot.
 * @fac2: second factot.
 *
 * Return: Void
 */
void print_two_digit(int fac1, int fac2)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(((fac1 * fac2) / 10)  + '0');
	_putchar(((fac1 * fac2) % 10) + '0');
}

/**
 * print_three_digit - Prints the result to three digits
 * @fac1: first factot.
 * @fac2: second factot.
 *
 * Return: Void
 */
void print_three_digit(int fac1, int fac2)
{
	_putchar(',');
	_putchar(' ');
	_putchar(((fac1 * fac2) / 100) + '0');
	_putchar((((fac1 * fac2) % 100) / 10) + '0');
	_putchar(((fac1 * fac2) % 10) + '0');
}

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

	if (!(n < 0 || n > 15))
	{
		for (fac1 = 0; fac1 <= n; fac1++)
		{
			_putchar('0');
			for (fac2 = 1; fac2 <= n; fac2++)
			{
				if ((fac1 * fac2) > 99)
				{
					print_three_digit(fac1, fac2);
				}
				else if ((fac1 * fac2) > 9 && (fac1 * fac2) <= 99)
				{
					print_two_digit(fac1, fac2);
				}
				else if ((fac1 * fac2) >= 0 && (fac1 * fac2) <= 9)
				{
					print_one_digit(fac1, fac2);
				}
				else
				{
					break;
				}
			}
			_putchar(10);
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
