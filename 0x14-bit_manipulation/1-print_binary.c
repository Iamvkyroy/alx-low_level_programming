#include "main.h"

/**
 * print_binary - prints the binary function of a number
 * @n: the binary number to print
 */
void print_binary(unsigned long int n)
{
	int v, num = 0;
	unsigned long int current;

	for (v = 63; v >= 0; v--)
	{
		current = n >> v;

		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
