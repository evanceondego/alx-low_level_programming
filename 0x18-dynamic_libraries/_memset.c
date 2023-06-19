#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * Fills the first n bytes of the mem area pointed to by s
 * @s: pointer to the memory area.
 * @b: constant byte to fill the memory with.
 * @n: number of bytes to be filled.
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return (s);
}
