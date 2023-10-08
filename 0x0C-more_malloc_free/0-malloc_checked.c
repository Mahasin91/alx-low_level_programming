#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: int size of memory to be allocated
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
