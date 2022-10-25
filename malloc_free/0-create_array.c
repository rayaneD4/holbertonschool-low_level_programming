#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character(s) to put in array
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == 0)
return (NULL);
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
i = 0;
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
