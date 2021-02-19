
#include "holberton.h"
/**
 * leet - Encodes a string into 1337.
 * changes all lowercase letters of a string to uppercase.
 * @s: An array of chars.
 *
 * Return: s.
 */
char *leet(char *s)
{
	int i, i2;

	char alpha[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\n'; i++)
	{
		for (i2 = 0; alpha[i2] != '\n'; i2++)
		{
			if (s[i] == alpha[i2])
			{

				s[i] = leet[i2];
			}
		}
	}

	return (s);
}
