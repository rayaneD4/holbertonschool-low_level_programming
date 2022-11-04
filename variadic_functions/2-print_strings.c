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
int i;
char *s
va_list p;

va_start(p, n);

for (i = 0; i < ; i++)
{
s = va_arg(p, char *);
{
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
