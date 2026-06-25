#include "main.h"

/**
  *append_text_to_file - appends text at the end of a file.
  *@filename: name od the file
  *@text_content: check the text
  *Return:Return 1 if the file exists and -1 if the file does not exist
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			if (write(fd, &text_content[i], 1) == -1)
			{
				close(fd);
				return (-1);
			}
		}
	}

	close(fd);
	return (1);
}
