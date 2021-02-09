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
	int lastD;

	mod = n % 10;
	if (n > 0)
	{
		lastD = mod;
	}
	else if (n == 0)
	{
		lastD = 0;
	}
	else
	{
		lastD = mod * -1;
	}
	_putchar(lastD + '0');
	return (lastD);
}
