#include "holberton.h"

/**
 * size -  Get the size of a number on bits.
 * @bits: Number to get it size.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

unsigned int size(int bits)
{
	unsigned int size = 0;

	for (; bits != 0; bits >>= 1)
	{
		size++;
	}

	return (size);
}

/**
 * clear_bit -  Sets the value of a bit to 0 at a given index..
 * @n: Number to be searched.
 * @index: the index, starting from 0 of the bit you want toet.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;

	unsigned int bitsOfN = size(num);

	if ((index >= bitsOfN) && num != 0)
	{
		return (-1);
	}

	if (n)
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}

}
