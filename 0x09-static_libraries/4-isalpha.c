#include "holberton.h"
/**
 * _isalpha - Checks a if a letter is alpha.
 *  @c: The char to be checked.
 *
 * Return: Returns 1  if c is a letter, lowercase or uppercase,
 * Rturns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
