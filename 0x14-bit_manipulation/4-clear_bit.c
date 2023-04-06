#include "main.h"

/**
 * clear_bit -set the value of a bit to zero at an index
 * @n: a pointer
 * @index : the bit to be set from zero
 * Return: Success (1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);

	return (1);
}
