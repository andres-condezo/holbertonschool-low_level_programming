
#include "holberton.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: a pointer to the resulting string.
 * @src: Srring to appends.
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int index;
	int len;

	char *s = dest;


	while (dest[i] != '\0')
	{
		i++;
	}

	len = i;

	for (index = 0; src[index] != '\0'; index++)
	{
		len++;
		dest[len] = src[index];
	}

	dest[index] = src[index];

	return (s);
}
