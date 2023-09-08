#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: alphabet
 * Return: Always 0 (success)
*/

int main(void)
{
char ch = 'a';
char cH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (cH <= 'Z')
{
putchar(cH);
cH++;
}
putchar('\n');
return (0);
}
