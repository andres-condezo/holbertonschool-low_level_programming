
#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: An array of chars.
 *
 * Return: s.
 */
char *cap_string(char *s)
{
char sc[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', 34, '(', ')', '{', '}'};

int i, i2;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; sc[i2] != '\0'; i2++)
			if (s[i] == sc[i2])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
				else
				{
					i2++;
				}
			}
			else
			{
				i2++;
			}
	}

	return (s);
}
