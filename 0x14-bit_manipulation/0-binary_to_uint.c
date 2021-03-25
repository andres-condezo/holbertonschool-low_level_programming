#include "holberton.h"

/**
 * basePowerTo - Calculate the power of a number..
 * @base: Base of the system.
 * @exp: The exponent.
 *
 * Return: unsigned int (res).
 */

unsigned int basePowerTo(unsigned int base, unsigned int exp)
{
	unsigned int res = 1;

	if (exp == 0)
	{
		return(1);
	}

	while (exp != 0)
	{
		res *= base;
		exp--;
	}

	return (res);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int base = 2;
	unsigned int exp = 0;
	unsigned int sum = 0;
	unsigned int dec = 0;

	if (b == NULL)
	{
		return (0);
	}

	while(b[index] != '\0')
	{
		index++;
	}
	index--;
	
	while (index >= 0)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		else if (b[index] == 0)
		{
			index--;
		}
		else
		{
			dec = (b[index] - 48) * basePowerTo(base, exp);
			exp++;
			index--;
			sum += dec;
		}
	}

	return (sum);
}
