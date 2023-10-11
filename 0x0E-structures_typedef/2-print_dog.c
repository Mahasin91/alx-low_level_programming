#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print instruct elem
 * @d: dog to print
 * Return: void
*/

void print_dog(struct dog *d)
{
if (d)
{
printf("name: %s\n", d->name ? d->name : "(nil)");
printf("name: %s\n", d->age);
printf("name: %s\n", d->owner ? d->owner : "(nil)");
}
}
