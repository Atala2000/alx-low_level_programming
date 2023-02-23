#include "main.h"
/**
* print_diagonal - main function that draws a diagonal line on the terminal.
* @n: integer.
* Return: A diagonal line.
*/
void print_diagonal(int n)
{
int a, j;

a = 0;
if (n > 0)
{
while (a < n)
{
j = 0;
while (j < a)
{
_putchar(' ');
j++;
}
a++;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
