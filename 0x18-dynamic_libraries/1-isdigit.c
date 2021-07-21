#include "holberton.h"
/**
 * _isdigit - Checks for a digit.
 * @c: Character to be checked.
 *
 * Return: 0 success.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
