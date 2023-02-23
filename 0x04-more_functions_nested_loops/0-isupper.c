#include "main.h"
/**
*_isupper -Checks number is uppercase
*@c: Value check
*Return: 1 if true 0 if not
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
