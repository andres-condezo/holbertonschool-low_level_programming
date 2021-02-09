#include "holberton.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 and prints + if n isreater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
