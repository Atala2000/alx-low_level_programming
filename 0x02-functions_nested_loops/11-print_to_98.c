#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - function printing values around 98
 * @a: function parameter
 * Return: 0
 */
void print_to_98(int a)
{
if (a >= 98)
{
while (a > 98)
printf("%d, ", a--);
printf("%d\n", a);
}
else
{
while (a < 98)
printf("%d, ", a++);
printf("%d\n", a);
}
}
