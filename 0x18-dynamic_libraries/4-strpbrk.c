#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (z = 0; *(accept + z) != '\0'; z++)
		{
			if (*(s + i) == *(accept + z))
				return (s + i);
		}
	}
	return ('\0');
}
