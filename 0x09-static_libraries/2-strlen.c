#include "main.h"

/**
 * _strlen - count the length of string
 * @s: string
 * Return: length of string
*/

int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}
