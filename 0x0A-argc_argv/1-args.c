#include <stdio.h>

/**
 * main - prints num of args
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
