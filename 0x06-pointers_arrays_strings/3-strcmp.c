#include "main.h"

/**
 * _strcmp - function compare string to another
 * @s1: pointer to dest
 * @s2: pointer to src
 * Return: return dest
 */

int _strcmp(char *s1, char *s2)
{
int q = 0;
while (*s1)
{
if (*s1 != *s2)
{
q = (((int)*s1 - 48) - ((int)*s2 - 48));
break;
}
s1++;
s2++;
}

return (dest);
}
