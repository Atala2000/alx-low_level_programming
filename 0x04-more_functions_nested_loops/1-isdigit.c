#include "main.h"
/**
 * _isdigit - checks if digit is no
 * @c: Number to check
 * Return: 1 if digit 0 if not
 **/
int _isdigit(int c)
{
	int j = c;

	if (j >= 48 && j <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
