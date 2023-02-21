#include "main.h"
/**
 * _abs - function to print absolute numbers
 * @n: data type of the parameter of the function
 * Return: 0
 */
int _abs(int n)
{
	int abs_val;

	if (n < 0)
	{
		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
