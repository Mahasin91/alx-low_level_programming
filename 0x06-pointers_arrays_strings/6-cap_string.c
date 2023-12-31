#include "main.h"
#include <stdio.h>

/**
 * isLower - check if ascii is lowercase
 * @c: char
 * Return: 1 if true 0 if false
 */

int isLower(char c)
{
return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - check if ascii is delimiter
 * @c: char
 * Return: 1 if tue 0 if false
 */

int isdelimiter(char c)
{
int i;
char delimiter[] = " \t\n,;.!?\"(){}";
for (i = 0; i < 13; i++)
if (c == delimiter[i])
return (1);
return (0);
}

/**
 * cap_string - function capitalizes words of string
 * @s: pointer string
 * Return: ptr
 */

char *cap_string(char *s)
{
char *ptr = s;
int founddelimiter = 1;
while (*s)
{
if (isdelimiter(*s))
founddelimiter = 1;
else if (isLower(*s) && founddelimiter)
{
*s -= 32;
founddelimiter = 0;
}
else
founddelimiter = 0;
s++;
}
return (ptr);
}
