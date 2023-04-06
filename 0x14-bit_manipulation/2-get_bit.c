#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit -gets a beit an an index
 * @n: unasigned long integer
 * @index: -given index to determine the bit
 * Return: On Success (bit) , otheriwise (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value = 1;

	value <<= index;

	if ((value & n) != 0)
		return (1);
	else
		return (0);
	return (-1);
}
