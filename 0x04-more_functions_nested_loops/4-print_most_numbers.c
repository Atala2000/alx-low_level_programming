#include "main.h"
/**
 * print_most_numbers - multiplies tow integers
 * Return: 0
 **/
void print_most_numbers(void)
{
	char k;

	for (k = 0; k <= 9; k++)
	{
		if (k != 2 && k != 4)
		{	
		_putchar(k + '0');
		}
	}
	_putchar('\n');
}
