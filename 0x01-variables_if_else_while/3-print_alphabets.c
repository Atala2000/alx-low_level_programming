#include <stdio.h>
/**
*main -prints alphabets in order
*Return: Always (0) Successful
*/
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	putchar(chr);
	for (chr = 'A'; chr <= 'Z'; chr++)
	putchar(chr);
	putchar('\n');
	return (0);
}

