#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Number(s)
 *
 **/
void print_triangle(int size)
{
int i, j, a;
int s = size - 1;
if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (a = 0; a < s; a++)
{
_putchar(' ');
}
s--;
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
