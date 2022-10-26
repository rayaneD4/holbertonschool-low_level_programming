#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: 0
 */
int *array_range(int min, int max)
{
int *ar;
int i = 0;
int sum = max - (min + 1);
if (min > max)
return (NULL);
ar = malloc(sizeof(int) * (sum));
if (ar == NULL)
return (NULL);
for (i = 0; i < sum; i++)
{
ar[i] = min++;
}
return (ar);
}
