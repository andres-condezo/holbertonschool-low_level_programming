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
	int qI, qII, qIII, qIV;
	int qIh, qIIh, qIIIh, qIVh;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			/*Cuadrante izquierdo superior*/
			for (qII = size; qII > i; qII--)
			{
				_putchar(' ');
			}
			for (qIIh = 1; qIIh <= i; qIIh++)
			{
				_putchar('#');
			}

			/*Cuadrante derecho superior*/
			for (qIh = 1; qIh <= i; qIh++)
			{
				_putchar('#');
			}
			for (qI = size; qI > i; qI--)
			{
				_putchar(' ');
			}
		_putchar(10);
		}

		for (i = 1; i <= size; i++)
		{
			/*Cuadrante izquierdo inferior*/
			for (qIII = 1; qIII < i; qIII++)
			{
				_putchar(' ');
			}
			for (qIIIh = size; qIIIh >= i; qIIIh--)
			{
				_putchar('#');
			}

			/*Cuadrante derecho inferior*/
			for (qIVh = size; qIVh >= i; qIVh--)
			{
				_putchar('#');
			}
			for (qIV = 1; qIV < i; qIV++)
			{
				_putchar(' ');
			}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
