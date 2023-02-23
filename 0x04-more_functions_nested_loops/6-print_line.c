#include "main.h"
/**
* print_line - prints a straight line.
* @n: integer.
* Return: a line or not.
*/
void print_line(int n)
{
int a;

a = 0;
if (n > 0)
{
while (a < n)
{
_putchar('_');
a++;
}
}
_putchar('\n');
}
