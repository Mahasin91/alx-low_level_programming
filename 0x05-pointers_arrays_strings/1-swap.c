#include "main.h"

/**
 * swap_int - swap the values of two int
 * @a: int parameter
 * @b: int parameter
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
