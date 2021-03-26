#include "holberton.h"

/**
 * size -  Get the size of a number on bits.
 * @bits: Number to get it size.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int size(int bits)
{
	int size = 0;

	for (; bits != 0; bits >>= 1)
	{
		size++;
	}

	return (size);
}

/**
 * set_bit -  Sets the value of a bit to 1 at a given index..
 * @n: Number to be searched.
 * @index: the index, starting from 0 of the bit you want toet.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;

	int bitsOfN = size(num);

	if (index >= bitsOfN)
	{
		return (-1);
	}

	if (n)
	{
		num = *n;
		*n = (1 << index) | num;

		return (1);
	}
	else
	{
		return (-1);
	}
}
