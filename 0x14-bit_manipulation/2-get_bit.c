#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number to be searched.
 * @index: the index, starting from 0 of the bit you want toet.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res, mask;

	if (n)
	{
		mask = 1 << index;
		res = mask & n;

		return (res >> index);
	}
	else
	{
		return (-1);
	}
}
