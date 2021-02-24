
#include "holberton.h"
/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 *
 * Return: void
 */

void print_number(int n)
{

	unsigned int temp = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((temp/10) > 0)
	{
		print_number(temp/10);
	}

	_putchar((temp % 10) + '0');
}
