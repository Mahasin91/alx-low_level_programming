#include<unistd.h>

/**
 * main - Entry point
 * Description: C program that prints using write function
 * Return: 1 (fail)
*/

int main(void)
{
char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, arr, 59);
return (1);
}
