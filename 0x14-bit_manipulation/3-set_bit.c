#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit -set the bit at an index to 1
 * @n: pointer to unsigned long interger
 * @index: bit identifier
 *
 * Return: Success(1), else (0)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (1);
}
