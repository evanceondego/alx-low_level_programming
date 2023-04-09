#include "main.h"
/**
 * create_file -This is a fucnt that creates a file
 * @filename: -name of the file to be created
 * @text_content: -A pointer to a string to rite on a file
 * Return: On Sucess (1),else(-1)
 */
int create_file(const char *filename, char *text_content)
{
	int a;

	int b;

	ssize_t count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	b = write(a, text_content, count);

	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
