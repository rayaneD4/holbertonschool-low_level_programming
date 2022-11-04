#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list va;
va_start(va, n);
if (n == 0)
printf("\n");
else
{
for (i = 0; i < n; i++)
{
if (separator == NULL)
printf("%d", va_arg(va, int));
else
printf("%d%s", va_arg(va, int), separator);
}
printf("%d\n", va_arg(va, int));
va_end(va);
}
}
