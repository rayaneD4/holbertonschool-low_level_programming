#include <stdio.h>
#include "main.h"

/**
 * prime - check prime number
 * @b: Integer
 * @i: Integer
 *
 * Return: 0
 */
int prime(int b, int i)
{
if (b == i)
return (1);
if (!(b % i))
return (0);
else
return (prime(b, i + 1));
}

/**
 * is_prime_number - give the square
 * @n: Integer
 *
 * Return: 0
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime(n, 2));
}
