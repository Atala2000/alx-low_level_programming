#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * Return: combo
 **/
int main(void)
{
	int j;
	
	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j != 57)
		{
		putchar(44);
		putchar(' ');
		}	
	}
	putchar('\n');
	return (0);
}
