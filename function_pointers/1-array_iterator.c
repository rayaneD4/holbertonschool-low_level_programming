#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Write a function that executes
 * @array: pointer
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i, t = size;

if (array == NULL || action == NULL)
exit(0);
for (i = 0; i < t; i++)
action(array[i]);
}
