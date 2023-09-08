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
int d = 0;
while (d <= 9)
{
putchar(d + '0');
d++;
}
putchar('\n');
return (0);
}
