#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX
*@filename:name of file to read
*@letters:num of letters to print and read
*Return: filename is NULL return 0 and actual num of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	if (letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(2, buf, r);

	free(buf);
	close(fd);

	if (w != r)
		return (0);

	return (r);
}
