#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet in lowercase.
 * Return: 0
 */
int main(void)

{
int x = 'z';

while (x <= 'a')
{
putchar (x);
x++;
}
putchar ('\n');
return (0);
}
