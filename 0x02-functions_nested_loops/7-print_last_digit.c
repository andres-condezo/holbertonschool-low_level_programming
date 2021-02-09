#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * * @n: Number to be computed.
 *
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int mod;

	if (n > 0)
	{
		mod = n % 10;
		return (mod);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		mod = n % 10;
		int x = mod * -1;

		return (x);
	}
}
