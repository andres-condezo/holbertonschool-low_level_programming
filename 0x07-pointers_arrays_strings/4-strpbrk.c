
#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence
 * in the string s of any of the bytes in the string accept.
 * @s: a string to be compared.
 * @accept: char to be serched.
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{

	unsigned int i, j;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}

	s = '\0';
	return (s);
}
