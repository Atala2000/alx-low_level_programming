#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * Return: combo
 **/
int main(void)
{
	int j;
	
	for (j = 0; j <= 10; j++)
	{
		putchar(j + '0');
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
