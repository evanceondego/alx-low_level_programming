#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
/**
* main - copy from one file to another
* @argv: -argument vector
* @argc: -argument count
*
* Return: On Success (1),else exit
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	ssize_t a_read = 1024;
	ssize_t a_write;
	ssize_t a_close;
	char buffer[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: copy file from file to\n");
		exit(97);
	}
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{dprintf(STDERR_FILENO, "Error: File not read %s\n", argv[1]);
				exit(98); }
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (a == -1)
	{dprintf(STDERR_FILENO, "Error: File not written to %s\n", argv[2]);
			exit(99); }
	while (a_read == 1024)
	{a_read = read(a, buffer, 1024);
	if (a_read == -1)
	{dprintf(STDERR_FILENO, "Error: File not read %s\n", argv[1]);
			exit(98); }
	a_write = write(b, buffer, a_read);
	if (a_write == -1)
	{dprintf(STDERR_FILENO, "Error: File not written to %s\n", argv[2]);
			exit(99); }
	}
a_close = close(a);
if (a_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can not close %d\n", a);
exit(100); }
if (a_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can not close %d\n", b);
exit(100); }
return (0);
}
