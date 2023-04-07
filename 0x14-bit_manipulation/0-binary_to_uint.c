#include "main.h"

/**
 * binary_to_unit - converts the binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int vkyroy = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		vkyroy = 2 * vkyroy + (b[i] - '0');
	}

	return (vkyroy);
}


