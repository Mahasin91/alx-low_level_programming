#include "main.h"

/**
 * *_memcpy - copy from string array
 * @dest: memory space
 * @src: source
 * @n: byte to use
 * Return: pointeer s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int it;
for (it = 0; it < n; it++)
{
dest[it] = src[it];
}
return (dest);
}
