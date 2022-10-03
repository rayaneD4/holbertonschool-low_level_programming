#include <stdio.h>
/**
* main - Entry point
* Description: Program that prints the alphabet in lowercase,
* except e and q.
* Return: 0
*/
int main(void)

{
char bo = 'a';
while (bo <= 'z')
{
if (bo <= 'z' && bo != 'q' && bo != 'e')
{
putchar(bo);
bo++;
}
else
{
bo++;
}
}
putchar('\n');
return (0);
}
