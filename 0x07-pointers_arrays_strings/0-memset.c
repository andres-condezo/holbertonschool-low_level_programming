
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
	int j = 0;
	int index = 0;
	int len, len2;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}


	len = i;
	len2 = j;


	while (index <= len2)
	{
		dest[len] = src[index];
		index++;
		len++;
	}

	return (dest);
}
