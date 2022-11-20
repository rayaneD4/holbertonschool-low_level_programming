#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res = (n >> index) & 1;

	if (index == NULL)
		return (-1);
	
	return (res);
}
