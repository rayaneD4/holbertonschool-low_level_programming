#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: Integer
 * @y: Integer
 *
 * Return: integer (Success)
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
return (x * _pow_recursion(x, y - 1));
else if (y < 0)
return (-1);
else
(y = 1);
return (1);
}
