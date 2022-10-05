#include <stdio.h>
#include "main.h"
/**
 * times_table - rints the 9 times table
 *Return: 0
 */
void times_table(void)
{
int na, nb, r;
for (na = 0; na <= 9; na++)
{
	for (nb = 0; nb <= 9; nb++)
	{
		r = na * nb;
		if (nb > 0 && r < 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (r > 9)
		{
		_putchar(' ');
		}
	if (r <= 9)
	{
		_putchar('0' + r);
	}
	else if (r > 9)
	{
		int n1 = r / 10;
		int n2 = r % 10;

		_putchar('0' + n1);
		_putchar('0' + n2);
	}
	if (nb < 9)
	{
	_putchar(',');
	}
	}
_putchar('\n');
}
}
