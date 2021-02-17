#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: a pointer to an string.
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;

	while (j < len)
	{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;

		len--;
		j++;
	}
}
