
#include "holberton.h"
/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compare.
 * @s2: First string to be compare.
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{

	int index = 0;
	int res;

	while (s1[index] != s2[index] && s1[index] != '\0' && s2[index] != '\0')
	{
		index++;
	}

	if (s1[index] == s2[index])
	{
		res = 0;
	}
	else
	{
		res = s1[index] - s2[index];
	}

	return (res);
}
