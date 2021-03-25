#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be parsed.
 *
 * Return: Void.
 */

void print_binary(unsigned long int n)
{

	unsigned long int bin;

	if (n > 1)
		print_binary(n >> 1);

	bin = n & 1;
	_putchar(bin + '0');
}
