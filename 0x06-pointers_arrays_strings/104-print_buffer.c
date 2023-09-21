#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer
 * @s: bytes of buffer
 * @l: line of buffer
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int i, k;
for (i = 0; i <= 9; i++)
{
if (i <= s)
printf("%02x", c[l * 10 + i]);
else
printf("  ");
if (i % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
putchar(c[l * 10 + k]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int j;
for (j = 0; j <= (size - 1) / 10 && size; j++)
{
printf("%08x: ", j * 10);
if (j < size / 10)
{
print_line(b, 9, j);
}
else
{
print_line(b, size % 10 - 1, j);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
