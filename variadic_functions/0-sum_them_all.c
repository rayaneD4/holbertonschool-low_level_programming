#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters
 * @n: integer
 *
 * Return: 0
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list pr;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(pt, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pr, int);
	}
	va_end(pr);
		return (sum);
}
