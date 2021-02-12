#include "holberton.h"
/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Is the size of the triangle.
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j, k;
	char hash = '#';
	char space = ' ';

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(space);
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(hash);
			}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
