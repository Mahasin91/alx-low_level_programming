#include "main.h"

/**
 * print_times_table - print times table of n
 * @n: takes num input
*/

void print_times_table(int n)
{
int num, mult, prod;
for (num = 0; num <= n; num++)
{
_putchar(48);
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 9)
_putchar(' ');
if (prod <= 99)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + 48);
_putchar((prod / 10) % 10 + 48);
}
else if (prod <= 99 && prod >= 10)
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
