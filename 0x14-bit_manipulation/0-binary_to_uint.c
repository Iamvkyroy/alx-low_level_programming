#include "main.h"

/**
 * binary_to_uint - converts the binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int vkyroy = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		vkyroy = 2 * vkyroy + (b[v] - '0');
	}

	return (vkyroy);
}


