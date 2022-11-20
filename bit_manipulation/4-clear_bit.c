#include "main.h"

/**
 * clear_bit - sets value ofa bit to 0 at a given index
 * @n: number
 * @index: index
 *
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index == NULL)
		return (-1);

	*n &= ~(1 << index);
		return (1);
}
