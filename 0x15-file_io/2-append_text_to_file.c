#include "main.h"
/**
* append_text_to_file -This appends text at the end of a file
* @filename: -name of the file to be created
* @text_content: -A pointer to a string to rite on a file
* Return: On Sucess (1),else(-1)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int a;

	int b, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, count);

	if (b == -1 || a == -1)
		return (-1);
	close(a);

	return (1);
}

