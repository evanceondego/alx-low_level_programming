#include "main.h"

/**
 * _strchr - locate the first occur of a char in a strg and
 * returns a pointer to that character.
 * @s: pointer to the string to search.
 * @c: target character to search for.
 *
 * Return: pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
