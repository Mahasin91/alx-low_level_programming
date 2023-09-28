#include "main.h"

/**
 * palind2 - obtains length of a
 * @a: string
 * @l: integer
 *
 * Return: int
 */
int palind2(char *x, int l)
{
	if (*x == 0)
		return (l - 1);
	return (palind2(x + 1, l + 1));
}

/**
 * palind3 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: int
 */

int palind3(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (palind3(x + 1, l - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
