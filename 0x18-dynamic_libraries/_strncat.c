#include "main.h"

/**
 * _strncat - function that concatenates two strings. It will use
 * at most n bytes from src. src does not need to be null terminated.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	/* Calculate the length of the destination string*/
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Calculate the length of the source string*/
	while (src[src_len] != '\0')
		src_len++;

	/* Concatenate at most n bytes from the source string*/
	for (int i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + n] = '\0';

	return (dest);
}
