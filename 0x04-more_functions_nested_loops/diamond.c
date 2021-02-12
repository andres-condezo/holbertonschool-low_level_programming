#include "holberton.h"
/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Is the size of the triangle.
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int i;
	int qlts, qlth;
	int qrts, qrth;
	int qlds, qldh;
	int qrds, qrdh;
	char hash = '#';
	char space = ' ';

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (qlts = size; qlts > i; qlts--)
			{
				_putchar(space);
			}
			for (qlth = 1; qlth <= i; qlth++)
			{
				_putchar(hash);
			}

			for (qrts = size; qrts > i; qrts--)
			{
				_putchar(space);
			}
			for (qrth = 1; qrth <= i; qrth++)
			{
				_putchar(hash);
			}

			for (qlds = size; qlds > i; qlds--)
			{
				_putchar(space);
			}
			for (qldh = 1; qldh <= i; qldh++)
			{
				_putchar(hash);
			}

			for (qrds = size; qrds > i; qrds--)
			{
				_putchar(space);
			}
			for (qrdh = 1; qrdh <= i; qrdh++)
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
