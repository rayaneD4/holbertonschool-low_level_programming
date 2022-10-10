#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
int i, l;

l = strlen(s);

for (i = l - 1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
