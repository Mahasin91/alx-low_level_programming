#include "main.h"

/**
 * *_memset - file memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: byte to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int it;
for (it = 0; n > 0; it++, n--)
{
s[it] = b;
}
return (s);
}
