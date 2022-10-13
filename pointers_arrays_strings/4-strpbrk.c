#include "main.h"
/**
 *  * _strpbrk - Write a function that searches a string for any of a set of bytes
 *   * @s: chaine
 *    * @accept: chaine
 *     * Return: 0
 *      */

char *_strpbrk(char *s, char *accept)
{
  int i;

  while (*s != '\0')
    {
      for (i = 0; accept[i]; i++)
	{
	  if (*s == accept[i])
	    {
	      return (s);
	    }
	}
      s++;
    }
  return (0);
}
