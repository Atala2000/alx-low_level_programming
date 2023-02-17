#include<stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int d1;

	for (d1 = 48; d1 < 58; d1++)
	{
		putchar(d1);
		if (d1 != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
