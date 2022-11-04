#include"variadic_functions.h"
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
va_list p;
unsigned int i;
char *s;

va_start(p, n);

for (i = 0; i < n; i++)
{
s = va_arg(p, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i != (n - 1) && separator)
printf("%s", separator);
}
printf("\n");

va_end(p);
}
