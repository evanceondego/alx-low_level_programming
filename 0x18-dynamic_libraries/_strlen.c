#include "main.h"

/**
 * _strlen - Function for counting the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
