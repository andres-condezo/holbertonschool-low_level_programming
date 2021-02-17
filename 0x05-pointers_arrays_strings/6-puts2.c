#include "holberton.h"
/**
 * puts2 - Prints every other character
 * of a string, starting with the first character.
 * @str: a pointer to an int
 *
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}


	int len = i;
	int j;

	for (j = 0; j <= len; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');

}
