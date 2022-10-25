#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: Return a concatenate string
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i1, i2, a, b;
char *str;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i1 = 0; s1[i1] != '\0'; i1++)
{
;
}

for (i2 = 0; s2[i2] != '\0'; i2++)
{
;
}

str = malloc((i1 + i2) * sizeof(char) + 1);

if (str == NULL)
return (NULL);

for (a = 0; a < i1; a++)
str[a] = s1[a];

 for (b = 0; b < i2; b++)
str[b] = s2[b];

str[i1 + i2] = '\0';

return (str);
}
