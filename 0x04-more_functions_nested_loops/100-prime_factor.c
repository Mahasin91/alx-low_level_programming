#include <stdio.h>

/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square root of x
*/

double _sqrt(double x)
{
float sqrt x / 2;
tmp = 0;
while (sqrt != tmp)
{
tmp = sqrt;
sqrt = (x / tmp + tmp) / 2;
}
return (sqrt);
}

/**
 * largest_prime_factor - prints the largest LPF
 * @num: input number
*/

void largest_prime_factor(long int num)
{
int prnm, largest;
while (num % 2 == 0)
num = num / 2;
for (prnm = 3; prnm <= _sqrt(num); prnm += 2)
{
while (num % prnm == 0)
{
num = num / prnm;
largest = prnm;
}
}
if (num > 2)
largest = num;
printf("%d\n", largest);
}

/**
 * main - Entry point
 * Return: always 0 (success)
*/

int main(void)
{
largest_prime_factor(612852475143);
return (0);
}
