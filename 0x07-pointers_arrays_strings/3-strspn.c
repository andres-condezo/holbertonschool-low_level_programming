#include "holberton.h"
/**
 * _strspn - Returns the number of bytes
 * in the initial segment of s which consist only of bytes from accept.
 * @s: a string to be compared.
 * @accept: Substring.
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (accept[j] == s[i])
			{
				len++;
				if (s[i] == s[i + 1])
				{
					len++;
				}
				break;
			}
		}
	}

	return (len);
}
