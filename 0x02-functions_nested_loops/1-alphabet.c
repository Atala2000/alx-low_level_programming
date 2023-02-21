#include "main.h"
/**
*print_alphabet -Print out function name
*Return: Always 0 successful
*/
void print_alphabet(void) /*void print_alphabet(void){} -acts as mainfunction*/
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}

