#include "main.h"
/**
 * print_last_digit - prints last digit
 * Return: value of digit
 **/
int print_last_digit(int x)
{
	int lastd = x;

	lastd = lastd % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
