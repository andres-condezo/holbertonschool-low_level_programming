#include "holberton.h"

/**
 * set_bit -  Sets the value of a bit to 1 at a given index..
 * @n: Number to be searched.
 * @index: the index, starting from 0 of the bit you want toet.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int res, mask;
	unsigned long int num = *n;

	if (n == 0)
	{
		*n = 1;
		return (1);
	}
	else if (n)
	{
		mask = 1 << index;
		*n = mask | num;

		return (1);
	}
	else
	{
		return (-1);
	}
}
