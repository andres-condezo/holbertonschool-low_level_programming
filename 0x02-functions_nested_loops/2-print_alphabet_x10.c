#include "holberton.h"
/**
 * print_alphabet_x10 - Prints alphabet in lower case 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
		_putchar(10);
	}

}
