#include "main.h"
/**
*_puts -finds string length
*@str: string
*Return: 0
*/
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
