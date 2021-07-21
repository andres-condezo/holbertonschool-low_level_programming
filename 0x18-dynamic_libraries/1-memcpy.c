
#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: a pointer to the resulting string.
 * @src: Srring to appends.
 * @n: numbber of chars to appends.
 *
 * Return: dests
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
