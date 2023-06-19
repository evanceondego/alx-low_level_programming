#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints out a character to the stdout
 * @c: character to be printed
 * Return: no of char printed (1) else -1
 */
int _putchar(char c)

{	ssize_t bytes_written = write(1, &c, 1);
	if (bytes_written == -1)
		return (-1);

	return (1);
}
