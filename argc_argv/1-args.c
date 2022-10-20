#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc - 1);
for (i = 0; i < argc - 1; i++)
{
argv++;
}
return (0);
}
