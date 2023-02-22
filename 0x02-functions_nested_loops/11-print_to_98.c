#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - Prints all umbers from input to 98
 * @n: The starting number
 * Return: 0 or 1
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98");
putchar('\n');
}
