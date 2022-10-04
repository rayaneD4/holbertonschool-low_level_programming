#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints signs
 * _putchar - prints signs
 * @n: The character to ch
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
