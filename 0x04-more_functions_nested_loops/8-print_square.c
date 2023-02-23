#include "main.h"
/**
* print_square - draws a square.
* @size: size of the square.
* Return: a square.
*/
void print_square(int size)
	{
int a, j;

if (size > 0)
{
a = 0;
while (a < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
	}
