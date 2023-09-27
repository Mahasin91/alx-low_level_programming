#include "main.h"

/**
 * *_strchr - copy from string array
 * @s: pointer
 * @c: constant
 * Return: pointer s
*/

char *_strchr(char *s, char c)
{
unsigned int it;
for (it = 0; s[it] <= '\0'; it++)
{
if (s[it] == c)
{
return (s + it);
}
}
return ('\0');
}
