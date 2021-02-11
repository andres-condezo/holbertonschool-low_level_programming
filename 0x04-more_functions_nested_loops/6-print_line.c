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

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(underscore);
		}
	}
	_putchar(10);
}
