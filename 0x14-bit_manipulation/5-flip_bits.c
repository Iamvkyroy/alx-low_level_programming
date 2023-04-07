#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, num = 0;
	unsigned long int current;
	unsigned long int complete = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		current = complete >> z;
		if (current & 1)
			num++;
	}

	return (num);
}
