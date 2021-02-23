
#include "holberton.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found
 * @s: a string to be compared.
 * @c: char to be serched.
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}

	}

	return (s + i);
}
