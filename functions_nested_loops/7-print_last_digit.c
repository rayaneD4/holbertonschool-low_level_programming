#include <stdio.h>
#include "main.h"
/**
 * digit - computes the absolute value of an integer.
 * @w: integer
 * Return: 0
 */
int print_last_digit(int w)
{
int digit = w % 10;
if (w < 0)
digit = digit * (-1);
putchar(digit);
return (digit);
}
