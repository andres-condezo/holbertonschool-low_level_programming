#include <stdio.h>

/**
 * main - Print last digit
 *
 * Return: 0 (Success)
 */
int main(void)
{

int i;
int j;

for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}
for (j = 'a'; j <= 'f'; j++)
{
	putchar(j);
}
	putchar('\n');
return (0);
}
