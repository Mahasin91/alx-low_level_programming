#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: base 10 numbers
 * Return: Always 0 (success)
*/

int main(void)
{
int d1 = 0, d2, d3;
while (d1 <= 9)
{
d2 = 0;
while (d2 <= 9)
{
d3 = 0;
while (d3 <= 9)
{
if (d1 != d2 && d1 < d2 && d2 != d3 && d2 < d3)
{
putchar(d1 + '0');
putchar(d2 + '0');
putchar(d3 + '0');
if (d1 + d2 + d3 != 24)
{
putchar(',');
putchar(' ');
}
}
d3++;
}
d2++;
}
d1++;
}
putchar('\n');
return (0);
}
