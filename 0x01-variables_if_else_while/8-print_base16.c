#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: Always(0) Success
*/

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
