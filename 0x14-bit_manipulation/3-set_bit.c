#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit -set the bit at an index to 1
 * @n: pointer to unsigned long interger
 * @index: bit identifier
 *
 * Return: Success(1), else (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * 8)

		return (-1);
	*n = *n | (1 << index);

	return (1);
}
