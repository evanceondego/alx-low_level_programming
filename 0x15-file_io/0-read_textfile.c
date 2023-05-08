#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -read a text file and print to STDOUT
 * @filename: refers to afile description
 * @letters: numbers of letters to be read and prited
 *
 * Return: On Success (number of bytes printed),
 * else (NULL)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *count;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	count = malloc(sizeof(char) * letters);

	b = read(a, count, letters);
	c = write(STDOUT_FILENO, count, b);
	free(count);

	close(a);
	return (c);
}
