#include "main.h"

/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int iq, jq;

for (iq = 0; haystack[iq] > '\0'; iq++)
{
for (jq = iq; haystack[jq] > '\0' && needle[jq - iq] > '\0'; jq++)
{
if (haystack[jq] != needle[jq - iq])
{
break;
}
}
if (needle[jq - iq] == '\0')
{
return (haystack + iq);
}
}
return (0);
}
