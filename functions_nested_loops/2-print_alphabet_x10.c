#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int yoo;
int boo;
for (yoo = 0; yoo < 10; yoo++)
{
for (boo = 'a'; boo <= 'z'; boo++)
{
_putchar (boo);
}
_putchar ('\n');
}
}
