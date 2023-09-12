#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Description: write  function
 * return: on success 1.
 *         on error -1 is returned. and error is set appropriately
 * Return: Always 0 (success)
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
