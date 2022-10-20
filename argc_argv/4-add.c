#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 * @argc: random number
 * @argv: random number
 * Return: return
 */
int main(int argc, char *argv[])
{
int n, s, p = 0;

for (n = 1; n < argc; n++)
{
for (s = 0; argv[n][s]; s++)
{
if (argv[n][s] < '0' || argv[n][s] > '9')
{
printf("Error\n");
return (1);
}
}
p += atoi(argv[n]);
}
printf("%d\n", p);
return (0);
}
