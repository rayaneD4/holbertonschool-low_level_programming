#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function that copy the string
 * @dest: string🎶
 * @src: string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int i;
int n = strlen(src);

for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return (dest);
}
