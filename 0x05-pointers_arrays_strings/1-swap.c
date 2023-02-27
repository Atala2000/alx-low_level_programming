#include "main.h"
/**
*swap_int -swaps numbers
*@a:First value
*@b:Second value
*Return: 0
**/
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
