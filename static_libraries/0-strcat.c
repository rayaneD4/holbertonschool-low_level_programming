#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 * @dest: pointer string
 * Return: 0
 */

int _strlen(char *dest)
{
  int n = 0;

  while (dest[n] != '\0')
    {
      n++;
    }
  return (n);
}
/**
 * _strcat - Entry point
 * @dest: pointer string
 * @src: pointer string
 *
 * Return:0
 */
char *_strcat(char *dest, char *src)
{
  int len = _strlen(dest);
  int i;

  for (i = 0; src[i] != '\0'; i++)
    dest[len + i] = src[i];
  dest[len + i] = '\0';

  return (dest);
}
