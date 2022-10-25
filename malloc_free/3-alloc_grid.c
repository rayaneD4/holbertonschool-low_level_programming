#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: pointer or NULL.
 */
int **alloc_grid(int width, int height)
{
int i, t;
int **p;

if (width <= 0 || height <= 0)
return (NULL);
p = malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (i = 0; i < height; i++)
free(p[i]);
free(p);
return (NULL);
}
for (t = 0; t < width; t++)
{
p[i][t] = 0;
}
}
return(p);
}
