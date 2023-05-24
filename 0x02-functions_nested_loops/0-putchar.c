#include "main.h"
/**
 * main - prints putchar
 * Return: NUll
 **/
int main(void)
{
	char arra[] = "_putchar";
	int i;

	for (i = 0; arra[i] != '\0'; i++)
	{
		_putchar(arra[i]);
	
	}
	_putchar('\n');

	return (0);
}
