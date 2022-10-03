#include <stdio.h>
/**
* main - Entry point
* Description: Program that prints the alphabet
* Return: 0
*/
int main(void)

{
int x = 'z';

while (x <= 'a')
{
putchar ((x % 10) + "0";
x++;
}
putchar ('\n');
return (0);
}
