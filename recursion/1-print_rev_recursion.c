#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: Pointer
 *
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
	return;
	printf("\n");
}
_print_rev_recursion(s + 1);
printf("%c", *s);
}
