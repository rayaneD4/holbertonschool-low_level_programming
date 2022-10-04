#include "main.h"
#include <stdio.h>
/**
 * print_alphabet 
 *
 * Return: 0
 */
void print_alphabet(void)
{
char boo = 'a';
while (boo <= 'z')
{
putchar(boo);
boo++;
}
putchar('\n');
}
