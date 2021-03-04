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
	unsigned int n = 1;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (accept[j] == s[i])
			{
				len++;
				while (s[i] == s[i + n])
				{
					if (s[i] == s[i + n])
					{
						len++;
						n++;
					}
					else
					{
						break;
					}
				}
				break;
			}
		}
	}

	return (len);
}
