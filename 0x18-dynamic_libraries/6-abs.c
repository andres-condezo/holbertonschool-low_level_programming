#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: Number to be computed.
 *
 * Return: 0 succes
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int x = n * -1;

		return (x);
	}
}
