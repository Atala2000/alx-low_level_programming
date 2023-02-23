#include"main.h"
/**
 * more_numbers- function to print 0 -14
 * Return: void
 */
void more_numbers(void)
{
int b, y;

for (y = 0; y <= 9; y++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
