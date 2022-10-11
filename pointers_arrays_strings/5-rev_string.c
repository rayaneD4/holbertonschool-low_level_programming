#include <stdio.h>
#include "main.h"
/**
* rev_string - Write a function that reverses a string
* @s: string pointer
* Return: 0
*/
void rev_string(char *s)
{
int n = strlen(s);
int i, j;

for (i = 0, j = n - 1; i < j; i++, j--)
{
char boo = s[i];
s[i] = s[j];
s[j] = boo;
}
}
