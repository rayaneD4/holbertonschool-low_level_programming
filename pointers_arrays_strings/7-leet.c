#include <stdio.h>
#include "main.h"
/**
 * puts_half - function that prints half of the string
 * @s: variable with the string
 * Return: 0
 */
char *leet(char *s)
{
int i;
char *l = s;
char a[] = {'A', 'E', 'O', 'T', 'L'};
char n[] = {'4', '3', '0', '7', '1'};
while (*s != '\0')
{
for (i = 0; i < 5; i++)
{
if (*s == a[i] || *s == a[i] + 32)
*s = n[i];
}
}
return (l);
}
