#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: 0
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = 0;
	int i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array:");

		for (i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i < high)
			printf(",");
		}

		printf("\n");
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}
	return (-1);
}
