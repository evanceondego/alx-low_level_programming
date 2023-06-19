#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to search.
 * @accept: pointer to the string containing the characters to search for.
 *
 * Return: pointer to the first occurrence of a char from `accept` in `s`,
 *         or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
		}

		x++;
	}

	return (NULL);
}
