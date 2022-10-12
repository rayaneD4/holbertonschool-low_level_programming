#include <stdio.h>
#include "main.h"
/**
* string_toupper - function that changes all lowercase
* string to uppercase
* @s: variable with the string
* Return: 0
*/
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] =(int)s[i] - 32;
}

}
return (s);
}
