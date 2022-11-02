#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, l = size;
	
	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < l; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
	
}


