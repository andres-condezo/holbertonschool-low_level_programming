#include "holberton.h"
/**
 * _islower - Checks for lowercase character.
 *  @c: The char to be checked.
 *
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
