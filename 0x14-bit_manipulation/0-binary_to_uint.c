#include "main.h"

/**
 * binary_to_uint - this converts a number to unsigned int
 * @b:The binary number
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int p;

	unsigned int value = 0;

	if (!b)
		return (0);
	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		value = 2 * value + (b[p] - '0');

	}
	return (value);
}
