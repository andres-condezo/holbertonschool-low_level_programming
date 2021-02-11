#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: Void
 */
void print_diagonal(int n)
{

int i, j;
char bkslash = '\\';
char space = ' ';

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(space);
			}
				_putchar(bkslash);
				_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
