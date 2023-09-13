#include "main.h"

/**
 * main - Entry point
 * Description: compute the sum of all the multiples of 3 or 5
 * Return: Always 0 (success)
*/

int main(void)
{
int num, sum;
for (num = 0; num < 1024; num++)
{
if (num % 3 == 0 || (num % 5 == 0))
sum += num;
}
printf("%d\n", sum);
return (0);
}
