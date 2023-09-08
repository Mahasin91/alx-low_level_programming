#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: base 16 numbers
 * Return: Always 0 (success)
*/

int main(void)
{
int d = 48;
while (d <= 102)
{
putchar(d);
if (d == 57)
d += 39;
d++;
}
putchar('\n');
return (0);
}
