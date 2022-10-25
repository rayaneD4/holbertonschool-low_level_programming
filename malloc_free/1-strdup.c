#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: String
 *
 * Return: 0
 */

char *_strdup(char *str)
{
  int i, n;
char *s;
 if (s1 == NULL)
   s1 = "";
 if (s2 == NULL)
   s2 = "";
 for (


 if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
;
}
i++;
s = malloc(sizeof(*s) * i);
if (s == NULL)
return (NULL);
for (n = 0; n < i; n++)
{
s[n] = str[n];
}
s[n] = '\0';
return (s);
}
