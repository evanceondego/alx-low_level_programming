#include "main.h"

/**
 * flip_bits -gets the number of bits to flip
 * @n: -number to be flipped
 * @m: -final number flipped
 *
 * Return:number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int p;

	unsigned int counter;

	counter = 0;
	for (p = 0; p <= (sizeof(unsigned long int) * 8); p++)

	{
		if ((n & 1) != (m & 1))
		{
			counter++;
		}
		n >>= 1;
		m >>= 1;
	}

	return (counter);
}
