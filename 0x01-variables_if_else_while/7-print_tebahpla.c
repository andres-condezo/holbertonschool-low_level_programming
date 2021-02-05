#include <stdio.h>

/**
 * main - Prints prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
