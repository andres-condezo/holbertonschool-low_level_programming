#include "holberton.h"
/**
 * print_rev - prints a string, followed by a new line, to stdout.
 * @s: a pointer to an string.
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int i = 0;
	int len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;

	while (s[len] != 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
