#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary -print binary representation of a given number
 * @n: unsinged long integer
 * Return: -void
 */
void print_binary(unsigned long int n)
{

	unsigned long int now;

	int p, counter = 0;

	for (p = 63; p >= 0; p--)
	{
		now = n >> p;

		if (now & 1)
		{
			putchar('1');
			counter++;
		}
		else if (counter)
			putchar('0');
	}

	if (!counter)
		putchar('0');
}
