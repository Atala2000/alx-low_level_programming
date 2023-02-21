#include "main.h"
/**
*_islower -Checks if number is lowercase
*@c: Character to check
*Return: 1 if character is lowercase and 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
