#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter (lowercase or uppercase)
 * @c: char to be checked
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
