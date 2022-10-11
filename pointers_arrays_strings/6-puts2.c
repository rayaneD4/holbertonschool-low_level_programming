#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 */
void puts2(char *str)
{
int x;
int n = strlen(str);

for (x = 0; x <= n; x++)
{
if (x % 2 == 0)
{
putchar(*(str + x));
}
}
putchar('\n');
}

