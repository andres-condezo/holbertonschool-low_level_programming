
#include "holberton.h"
/**
 * _strncpy - Concatenates two strings.
 * @dest: a pointer to the resulting string.
 * @src: Srring to appends.
 * @n: Number of chars to be concatenated.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
