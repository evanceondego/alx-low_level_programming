#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	/* Calculate the length of the destination string*/
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Calculate the length of the source string*/
	while (src[src_len] != '\0')
		src_len++;

	/* Append the source string to the destination string*/
	for (int i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + src_len] = '\0';

	return (dest);
}
