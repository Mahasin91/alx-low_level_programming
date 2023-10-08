#include "main.h"

/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rslt;
	unsigned int i;

	/* if new_size == old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* if new_size == 0 and ptr is not NULL, call free(ptr) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* if ptr is NULL, call malloc(new_size) */
	if (ptr == NULL)
	{
		rslt = malloc(new_size);
		if (rslt == NULL)
			return (NULL);
		return (rslt);
	}

	/* allocate memory for new_size */
	rslt = malloc(new_size);
	if (rslt == NULL)
		return (NULL);

	/* copy contents of ptr to result */
	for (i = 0; i < old_size && i < new_size; i++)
		rslt[i] = ((char *)ptr)[i];

	/* free ptr */
	free(ptr);

	return (rslt);
}
