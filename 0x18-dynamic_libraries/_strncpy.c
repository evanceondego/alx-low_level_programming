#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 * @n: Maximum number of characters to be copied
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most n characters from source to destination*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/*string has fewer than n characters, pad the destination with null char*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
