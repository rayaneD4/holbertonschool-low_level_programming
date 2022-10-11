#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int i, h;
int n = strlen(str);

if (n % 2 == 0)
h = n / 2;
else
h = (n / 2) + 1;   
for (i = h; i < n; i++)
{
putchar(*(str + i));
}
putchar('\n');
}
