
#include "holberton.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: a pointer to the resulting string.
 * @src: Srring to appends.
 * @n: Number of chars to be concatenated.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;
	int index = 0;
	int len;
	int len2;

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
		if (n > 0)
		{
			dest[len] = src[index];
			len++;
			index++;
			n--;
		}
		else
		{
			break;
		}
	}

	return (dest);
}
