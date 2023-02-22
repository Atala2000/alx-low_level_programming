#include "main.h"
/**
*_isalpha -Prints letters
*@c: Value check
*Return: 0 for false and 1 for true
*/
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
