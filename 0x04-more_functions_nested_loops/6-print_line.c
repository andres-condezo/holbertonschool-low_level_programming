#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: Number of underscores.
 * *
 * Return: Void
 */
void print_line(int n)
{

int i;
char underscore = '_';

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(underscore);

		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
