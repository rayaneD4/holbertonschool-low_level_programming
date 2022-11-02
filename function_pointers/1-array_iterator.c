#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Write a function that executes a function given as a parameter on each element of an array
 * @array: pointer
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i, s;

if (array != NULL && action != NULL)

for (i = 0; i < s; i++)
action(array[i]);
}
