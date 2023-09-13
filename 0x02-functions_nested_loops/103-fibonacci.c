#include "main.h"

/**
 * main - Entry point
 * Description: print the sum of even valued fibonacci
 * Return: Always 0 (success)
*/

int main(void)
{
float total_sum;
unsigned long fib1 = 0, fib2 = 1, sum;
while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;
if (sum % 2 == 0)
total_sum += sum;
fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", total_sum);
return (0);
}
