#include "holberton.h"

/**
 * print_positive - prints an integer.
 * @n: the integer to be printed.
 *
 * Return: Void
 */

int print_positive(int n)
{
	int u, d, c, m;

	u = n % 10;

	if (n == 0)
	{
		_putchar(u + '0');
	}
	else if (n > 0 && n < 9)
	{
		_putchar(u + '0');
	}
	else if (n > 9 && n <= 99)
	{
		d = n / 10;
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else if (n > 99 && n < 999)
	{
		c = n / 100;
		d = (n % 100) / 10;
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else
	{
		m = n / 1000;
		c = (n % 1000) / 100;
		d = (n % 100) / 10;
		_putchar(m + '0');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	return (0);
}

/**
 * print_negative - lrints an integer.
 * @n: the integer to be printed.
 *
 * Return: Void
 */

int print_negative(int n)
{
	int temp;

	temp = n * -1;
	int u, d, c, m;

	u = temp % 10;

	_putchar('-');
	if (temp == 0)
	{
		_putchar(u + '0');
	}
	else if (temp > 0 && temp < 9)
	{
		_putchar(u + '0');
	}
	else if (temp > 9 && temp <= 99)
	{
		d = temp / 10;
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else if (temp > 99 && temp < 999)
	{
		c = temp / 100;
		d = (temp % 100) / 10;
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else
	{
		m = temp / 1000;
		c = (temp % 1000) / 100;
		d = (temp % 100) / 10;
		_putchar(m + '0');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	return (0);
}

/**
 * print_number - lrints an integer.
 * @n: the integer to be printed.
 *
 * Return: Void
 */

void print_number(int n)
{

	if (n >= 0)
	{
		print_positive(n);
	}
	else
	{
		print_positive(n);
	}
}
