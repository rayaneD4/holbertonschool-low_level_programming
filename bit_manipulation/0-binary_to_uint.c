#include "main.h"
/**
 * binary_to_uint - return bianry to decimal
 * @b: binary number
 * Return: 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;
	int size;
	if (b == NULL)
		return (0);
	size = strlen(b);
	while (i < size)
	{	/* Found another digit.*/
		if (b[i] == '0' || b[i] == '1')
		{
			x <<= 1;
			x += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (x);
}
