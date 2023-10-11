#include "function_pointers.h"

/**
 * array_iterator - print arr through function pointer
 * @array: array
 * @size: size
 * @action: function pionter
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int *x = array + size - 1;
if (array && size && action)
while (array <= x)
action(*array++);
}
