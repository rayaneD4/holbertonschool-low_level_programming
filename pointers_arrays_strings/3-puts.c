#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
