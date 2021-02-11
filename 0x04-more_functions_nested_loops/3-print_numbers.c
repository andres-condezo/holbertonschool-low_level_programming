#include "holberton.h"
/**
 * print_numbers - the numbers, from 0 to 9.
 *
 * Return: Void
 */
void print_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar(10);

}
