#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet
 * Return: 0
 */
int main(void)
{
char nu = 0;
char cod = 'a';
while (nu < 10)
{
putchar('0' + nu);
nu++;
}
while (cod <= 'f')
{
putchar(cod);
cod++;
}
putchar('\n');
return (0);
}
