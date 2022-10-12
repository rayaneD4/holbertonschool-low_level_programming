#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: chaine premier
 * @dest: chaine deuxieme
 *
 * Return: 0
 */

int _strlen(char *s)
{
int n = 0;

while (*s != '\0')
{
n++;
s++;

}
return (n);
}

char *_strcat(char *dest, char *src)
{
int len = _strlen(dest);
int i;
for (i = 0; src[i] != '\0';i++)
{
dest[len+1] = src[i];
dest[len+1] = '\0';
}
return(dest);
}
