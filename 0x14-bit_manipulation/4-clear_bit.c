#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - cleaars bit
 * @n: thisisparam
 * @index: index
 * Return: 1 if positive
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
