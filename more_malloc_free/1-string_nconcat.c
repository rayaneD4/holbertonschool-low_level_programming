#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: A string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int g1, g2;

if (s1 == NULL)
s1 = "";
for (g1 = 0; s1[g1] != '\0'; g1++)
{
;
}

if (s2 == NULL)
s2 = "";

for (g2 = 0; s2[g2] != '\0'; g2++)
{
;
}
if (n > g2)
n = g2;

c = malloc(sizeof(char) * (n + g1 + 1));

if (c == NULL)
return (NULL);
for (g1 = 0; s1[g1] != '\0'; g1++)
c[g1] = s1[g1];
for (g2 = 0; g2 < n; g2++)
{
c[g1] = s2[g2];
g1++;
}
c[g1] = '\0';

return (c);
}
