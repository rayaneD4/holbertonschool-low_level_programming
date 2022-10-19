#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase character.
 * @c: to character to check
 * Return: 0 
 */
int _islower(int c)
{
  if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
  return (1);
}
  else
    {
      return (0);
    }
}
