#include "main.h"

/**
 * *_strpbrk - search string
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte
*/

char *_strpbrk(char *s, char *accept)
{
int it, jt;
char *p;

it = 0;
while (s[it] != '\0')
{
jt = 0;
while (accept[jt] != '\0')
{
if (accept[jt] == s[it])
{
p = &s[it];
return (p);
}
jt++;
}
it++;
}
return (0);
}
