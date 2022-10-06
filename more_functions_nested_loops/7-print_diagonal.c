#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Number(s)
 *
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i, x;
for (i = 0; i < n; i++)
{
for (x = 0; x < i; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');

}
}
