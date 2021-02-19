
#include "holberton.h"
/**
 * rot13 - Encodes a string into root13.
 * @s: An array of chars.
 *
 * Return: s.
 */

char *rot13(char *s)
{
	int i, i2;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char root[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; alpha[i2] != '\0'; i2++)
		{
			if (s[i] == alpha[i2])
			{
				s[i] = root[i2];
			}
			else
			{
				s[i] = s[i];
			}
		}
	}

	return (s);
}
