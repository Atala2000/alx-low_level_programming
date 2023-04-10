#include "main.h"
#include <stdlib.h>

/**
 * set_bit - This sets the bit value to 1
 * @n: Resp for par
 * @index: IS index
 * Return: succesful
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
