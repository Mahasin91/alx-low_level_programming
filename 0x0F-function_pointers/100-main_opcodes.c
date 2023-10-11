#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - check the code
  * @argc: num og args
  * @argv: arg vector
  *
  * Return: int
  */

int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int i = 0;
	int hexByte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = main;
	while (i < atoi(argv[1]))
	{
		hexByte = *(unsigned char *)(f + i);
		printf("%.2x", hexByte);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
