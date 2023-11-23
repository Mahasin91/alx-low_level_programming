#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * isNumber - checks if a string is a number
 * @s: string
 * Return: 1 if number, 0 if otherwise
 */
int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * print_result - prints the result of the multiplication
 * @result: array
 * @len: length of result
 */

void print_result(int *result, int len)
{
	int i;

	/* remove leading zeros */
	for (i = 0; i < len && result[i] == 0; i++)
		;

	/* if all digits are 0, print 0 */
	if (i == len)
		printf("0");

	/* print the result */
	for (; i < len; i++)
		printf("%d", result[i]);

	printf("\n");
}

/**
 * main - multiplies two numbers
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, j, nm1_len, nm2_len;
	int *result;

	if (ac != 3 || !isNumber(av[1]) || !isNumber(av[2]))
	{
		printf("Error\n");
		exit(98);
	}

	nm1_len = strlen(av[1]);
	nm2_len = strlen(av[2]);

	result = calloc(nm1_len + nm2_len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* multiply each digit of num1 with num2 */
	for (i = nm1_len - 1; i >= 0; i--)
	{
		for (j = nm2_len - 1; j >= 0; j--)
		{
			/* multiply each digit and add to result */
			int mul = (av[1][i] - '0') * (av[2][j] - '0');

			/* add to previous result */
			int sum = result[i + j + 1] + mul;

			/* update result */
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	/* print result and free the allocated memory */
	print_result(result, nm1_len + nm2_len);
	free(result);
	return (0);
}
