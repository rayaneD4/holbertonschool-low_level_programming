#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
int *r = malloc(b);

if (r == NULL)
exit(98);
return (r);
}
