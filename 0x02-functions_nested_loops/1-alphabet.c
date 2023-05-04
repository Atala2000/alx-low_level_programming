#include "main.h"
/**
 * main - prints the alphabet 
 * return: nothing
 **/
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z';)
	{
		_putchar(j);
		j++;
	}
	_putchar(j);

	return;
}
