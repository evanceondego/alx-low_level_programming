#include "main.h"

/**
 * _strspn - gets the length of a prefix substring that consists
 * only of characters present in another string.
 * @s: pointer to the string to search.
 * @accept: pointer to the string containing the characters to match.
 *
 * Return: no of consecutive bytes in `s` that match char in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (matches);
			}
		}

		i++;
	}

	return (matches);
}
