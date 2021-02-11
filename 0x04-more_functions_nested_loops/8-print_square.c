#include "holberton.h"
/**
 * print_square - Prints a square, followed by a new line.
 * @size:  is the size of the square.
 *
 * Return: Void
 */
void print_square(int size)
{

int i, j;
char hash = '#';

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
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
