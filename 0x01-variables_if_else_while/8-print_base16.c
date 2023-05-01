#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints digits of base 16
 * Return: void
 **/
int main(void)
{
	char j;

	for (j = '0'; j <= '9';)
	{
		putchar(j);
		j++;
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
