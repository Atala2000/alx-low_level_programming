#include "main.h"

/**
 * get_endianness - chechs endianness
 * Return: Value
 **/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
