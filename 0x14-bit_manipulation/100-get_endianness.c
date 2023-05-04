#include "main.h"

/**
 * get_endianness -check if its big or little endian
 * Return: Sucees (1) for little ,else (0) big
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *endian = (char *)&value;

	if (*endian)
		return (1);

	return (0);
}
