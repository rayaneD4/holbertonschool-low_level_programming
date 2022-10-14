#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Function that prints sum of the two diagonal
 * of a square matrix of integers.
 * @a: array
 * @size: array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int i, sum1, sum2;

sum1 = 0;
sum2 = 0;
for (i = 0; i < size * size ; i = i + size + 1)
{
sum1 = sum1 + a[i];
}
for (i = size - 1; i < (size * size) - 1;)
{
sum2 = sum2 + a[i];
}
printf("%d, %d\n", sum1, sum2);
}
