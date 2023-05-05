#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_coin;

if (index > 63)
return (-1);

bit_coin = (n >> index) & 1;

return (bit_coin);
}
