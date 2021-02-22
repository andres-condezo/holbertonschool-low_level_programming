
#include "holberton.h"
/**
 * _memset - Concatenates two strings.
 * @s: a pointer to the resulting string.
 * @b: Srring to appends.
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && b != '\0'; i++)
		s[i] = b;
	for ( ; i < n; i++)
		s[i] = '\0';

	return (s);
}
