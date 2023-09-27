#include "main.h"

/**
 * print_chessboard - print array
 * @a: rows
 * Return: nothing
 */


void print_chessboard(char (*a)[8])
{
int it, jt;
for (it = 0; it < 8; it++)
{
for (jt = 0; jt < 8; jt++)
{
_putchar(a[it][jt]);
}
_putchar('\n');
}
}
