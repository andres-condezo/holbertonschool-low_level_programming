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
	int len;
	int mid_even, mid_odd;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	if (len % 2 == 0)
	{
		mid_even = (len / 2);

		while (mid_even < len)
		{
			_putchar(str[mid_even]);
			mid_even++;
		}
	}
	else
	{
		mid_odd = (len / 2) + 1;

		while (mid_odd < len)
		{
			_putchar(str[mid_odd]);
			mid_odd++;
		}
	}

	_putchar('\n');
}
