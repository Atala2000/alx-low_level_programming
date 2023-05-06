#include "main.h"
/**
 * _abs - prints absolute digit
 * @x: j
 * Return: 0
 **/
int _abs(int x)
{
	int j = x;

	if (j < 0)
	{
		j = j * -1;
		return (j);
	}
	return (j);
}
