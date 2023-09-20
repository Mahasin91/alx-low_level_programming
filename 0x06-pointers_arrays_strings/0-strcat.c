#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2]; c2++)
dest[c++] = src[c2];
return (dest);

}
