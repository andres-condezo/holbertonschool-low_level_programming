#include <stdio.h>

/**
 * main - Prints prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
char alpha[] = "abcdfghijklmnoprstuvwxyz";
int i;

for (i = 0; i <= 24; i++)
{
	putchar(alpha[i]);
}
	putchar('\n');
	return (0);
}
