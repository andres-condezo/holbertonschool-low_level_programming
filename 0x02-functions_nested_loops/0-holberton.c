#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints Holberton string
 *
 * Return: 0 (Success)
 */
int main(void)
{
char string[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
int i;

for (i = 0; i <= 8; i++)
{
_putchar(string[i]);
}

_putchar('\n');
return (0);
}
