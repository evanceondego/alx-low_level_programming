#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring in a string.
 * @haystack: pointer to the string to search.
 * @needle: pointer to the substring to search for.
 *
 * Return: pointer to the first occurrence of the substring in the string,
 *         or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i;
			j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				{
					x++;
					j++;
				}
				else
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}

		i++;
	}

	return (NULL);
}
