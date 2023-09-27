#include "main.h"

/**
 * print_diagsums - Description
 * @a: array
 * @size: size
 * Return: nothing
 */


void print_diagsums(int *a, int size)
{
int it, x, = 0, y = 0;
for (it = 0; it < size; it++)
{
x += a[it];
y += a[size - it - 1];
a += size;
}
printf("%d, ", x);
printf("%d\n", y);
}
