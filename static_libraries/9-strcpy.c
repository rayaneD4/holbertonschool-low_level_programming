#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function that copy the string
 * @dest: string
 * @src: string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
  int i = 0;
  for (; src[i] != '\0'; i++)
    dest[i] = src[i];
  dest[i++] = '\0';
  return (dest);
}
