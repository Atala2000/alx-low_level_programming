#include "main.h"
/*
 * void print_alphabet_x10 - prints alphabet 10 times
 * return: no value
 **/
void print_alphabet_x10(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
