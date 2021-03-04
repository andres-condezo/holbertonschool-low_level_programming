
#include "holberton.h"
/**
 * _strstr - finds the first occurrence
 * of the substring needle in the string haystack.
 * in the string s of any of the bytes in the string accept.
 * @haystack: a string to be compared.
 * @needle: substring to be searched.
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (haystack[i] == needle[i])
			{
				return (haystack);
			}
			j++;
		}
		if (needle == 0 || needle[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ('\0');
}
