#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints num
 * Return: 0
 */
int main(void)
  
{
int wx = 0;
while (wx <= 9)
{
putchar('0' + wx);
if (wx < 9)
{
putchar(',');
putchar(' ');
}
wx++;
}
putchar('\n');
return (0);
}
