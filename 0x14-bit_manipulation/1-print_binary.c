#include "main.h"

/**
 * print_binary - binary numbers are printed
 * @n: 12
 **/

void print_binary(unsigned long int n)
{
	int x, y = 0;
	unsigned long int num;

	for (x = 63; x >= 0; x--)
	{
		num = n >> x;

		if (num & 1)
		{
			_putchar('1');
			num++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
