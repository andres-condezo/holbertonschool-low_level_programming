#include "holberton.h"
/**
 * _strcpy - Prints half of a string.
 * @dest: a pointer to an string
 * @src: a pointer to an string
 *
 * Return: Void
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = src[index];

	return (dest);
}
