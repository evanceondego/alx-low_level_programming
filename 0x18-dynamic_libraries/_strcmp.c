#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 *
 * Return: a value less than 0
 * a value greater than 0
 * or 0 if the strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0;

	/* Compare char until a mismatch or the end of a string is reached*/
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;

	/* Return the difference in ASCII values of the mismatched characters*/
	return (s1[counter] - s2[counter]);
}
