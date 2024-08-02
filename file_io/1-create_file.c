#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, bytes_written;

	if (filename == NULL)
		return (-1);

    /* Open the file with flags: create, write only, truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[len])
			len++;

		/* Write text_content to the file */
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close(fd);
	return (1);
}
