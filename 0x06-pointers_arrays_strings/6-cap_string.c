
#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: An array of chars.
 *
 * Return: s.
 */
char *cap_string(char *s)
{
char sc[] = " \t\n,;.!?\"(){}";

int i, i2;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}

		}
		for (i2 = 0; sc[i2] != '\0'; i2++)
			if (s[i] == sc[i2])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
	}

	return (s);
}
