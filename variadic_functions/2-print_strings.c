#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string
 * @n: number
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i, len = n;
va_list p;

va_start(p, n);

for (i = 0; i < len; i++)
{
const char *s = va_arg(p, const char *);
{
if (s == NULL)
printf("(nil)");
else if (separator == NULL)
printf("%d", va_arg(p, int));
else
printf("%d%s", va_arg(p, int), separator);
}
va_end(p);
printf("\n");
}
}
