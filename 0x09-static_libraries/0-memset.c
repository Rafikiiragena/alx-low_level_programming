#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled>
 *
 * Return: Apointer to be fielled with area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

