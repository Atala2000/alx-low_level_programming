#include <stdlib.h>
#include <stdio.h>
/**
 * main - main section of code
 * Return: 0
 **/
int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'q' && j != 'e')
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
