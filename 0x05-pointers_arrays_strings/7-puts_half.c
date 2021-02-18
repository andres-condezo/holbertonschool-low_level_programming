#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string.
 * @str: a pointer to an int
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	int len = i;

	if (len % 2 == 0)
	{
		int mid_even = (len / 2);

		while (mid_even < len)
		{
			_putchar(str[mid_even]);
			mid_even++;
		}
	}
	else
	{
		int mid_odd = (len / 2) + 1;

		while (mid_odd < len)
		{
			_putchar(str[mid_odd]);
			mid_odd++;
		}
	}

	_putchar('\n');
}
