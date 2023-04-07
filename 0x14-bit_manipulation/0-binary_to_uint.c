#include "main.h"

/**
 * binary_to_unit - converts the binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int victor = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		victor = 2 * victor + (b[v] - '0');
	}

	return (victor);
}


