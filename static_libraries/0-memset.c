#include <stdio.h>
#include "main.h"

/**
 * _memset - Entry point
 * @s: pointer
 * @b: character
 * @n: integer
 *
 * Return: Always s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
  char *m;
  char d = b;
  for (m = s; n > 0; --n, ++m)
    {
      *m = d;
    }
  return (s);
}
