#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
  int i;
  for(i=1;i<=10;printf("  01234567891011121314 \n",i++));
  return 0;
}
