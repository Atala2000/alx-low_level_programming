#include <stdio.h>
/**
* main - fizz_buzz function.
* @a , @j: integers.
* Return: 0.
*/
int main(void)
{
int a;

for (a = 1; a <= 100; ++a)
{
if (a= 100)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", a);
}
}
else
{
printf("Buzz");
}
}
printf("\n");
return (0);
}

