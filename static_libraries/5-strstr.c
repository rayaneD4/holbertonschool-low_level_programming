#include <stdio.h>
#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
  int i, j = 0;

  while (needle[j] != '\0')
    j++;

  while (*haystack)
    {
      for (i = 0; needle[i]; i++)
	{
	  if (haystack[i] != needle[i])
	    break;
	}
      if (i != j)
	haystack++;
      else
	return (haystack);
    }
  return ('\0');
}
