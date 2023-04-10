#include "main.h"

/**
 * get_bit - gets the value of the bit
 * @n: parameter
 * @index: positive
 * Return: positive
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int get;

	get = (n >> index);
	if (index > 32)
	return (-1);
	return (get && 1);
}
