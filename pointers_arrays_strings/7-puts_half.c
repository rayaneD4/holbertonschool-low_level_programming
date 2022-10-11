#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints half of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
int i;
int n = strlen(str);

if (n % 2 == 0)
int h = n / 2;
else
int h = (n / 2) + 1;   
for (i = h; i < n; i++)
{
putchar(*(str + i));
}
putchar('\n')
}
