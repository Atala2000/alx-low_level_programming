#include<stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	char re;

	for (re = 'z'; re >= 'a'; re--)
	putchar(re);
	putchar('\n');
	return (0);
}
