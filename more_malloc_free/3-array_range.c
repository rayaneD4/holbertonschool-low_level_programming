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

if (min > max)
return (NULL);
ar = malloc(sizeof(*ar) * (min + 1));
if (ar == NULL)
return (NULL);
for (i = 0; i < min; i++)
{
ar[i] = min++;
}
return (ar);
}
