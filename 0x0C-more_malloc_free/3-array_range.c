#include "main.h"

/**
* array_range - a function that creates an array of integers
* @min: minimum
* @max: maximum
* Return: pointer
**/

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i += 1)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
