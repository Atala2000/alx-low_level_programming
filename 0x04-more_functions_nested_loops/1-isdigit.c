#include "main.h"
/**
*_isdigit -Checks if number is digit
*@c: Character to check
*Return: 1 if character is lowercase and 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
