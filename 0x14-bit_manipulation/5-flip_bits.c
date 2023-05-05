#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int new;
unsigned long int complete = n ^ m;

for (i = 63; i >= 0; i--)
{
new = complete >> i;
if (new & 1)
number++;
}
return (count);
}
