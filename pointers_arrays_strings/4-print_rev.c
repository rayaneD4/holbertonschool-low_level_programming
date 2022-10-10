#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * @s: variable
 * Return: 0
 */
void print_rev(char *s)
{
char *res = malloc( longitud * sizeof(char) + 1);

for (i = 0; i < longitud-1; i++)
{
res[i] = word[longitud - 2 - i];
}
res[i] = '\0';
}
