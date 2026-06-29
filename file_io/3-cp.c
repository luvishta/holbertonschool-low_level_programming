#include "main.h"

/**
 * BUF - buffer size
 */
#define BUF 1024
/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies data from one file to another
 * @from: source file descriptor
 * @to: destination file descriptor
 * @file: source file name
 */
void copy_file(int from, int to, char *file)
{
	char buf[BUF];
	ssize_t r, w;

	while ((r = read(from, buf, BUF)) > 0)
	{
		w = write(to, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			close_fd(from);
			close_fd(to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		close_fd(from);
		close_fd(to);
		exit(98);
	}
}

/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(from);
		exit(99);
	}

	copy_file(from, to, argv[1]);
	close_fd(from);
	close_fd(to);

	return (0);
}
