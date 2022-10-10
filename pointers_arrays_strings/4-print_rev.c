#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * @s: variable
 * Return: 0
 */
void print_rev(char *s)
}
int i, l;

l = strlen(s);

for (i = l - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
