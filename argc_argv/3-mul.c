#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all arguments received
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *p;
int i;
int r = 1;

if (argc == 3)
{
for (i = 1; i < argc; i++)
{
r= r * strtol(argv[i], &p, 10);
}
printf("%d\n", r);
}
else
printf("Error\n");
return (1);
