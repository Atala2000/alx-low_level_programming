#include <stdlib.h>
#include <stdio.h>
/**
 * main -prints all numbers of base 10
 * Return: No value
 **/
int main(void)
{	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
