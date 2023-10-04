#include "main.h"

/**
 * argstostr - concatenate strings pointed to by `av'
 * @ac: number
 * @av: array
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, ttb = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; *(*(av + i) + j); ++j)
			;
		ttb += j;
		++ttb;
	}
	++ttb;

	p = (char *) malloc(ttb * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; ++i, ++k)
	{
		for (j = 0; *(*(av + i) + j); ++j, ++k)
			*(p + k) = *(*(av + i) + j);
		*(p + k) = '\n';
	}
	*(p + k + 1) = '\0';
	return (p);
}
