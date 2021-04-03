#include "holberton.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: The name to the file to create.
 * @text_content: The string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_fd, write_fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	open_fd = open(filename, O_WRONLY | O_APPEND);

	if (open_fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(open_fd);
		return (1);
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	write_fd = write(open_fd, text_content, len);

	if (write_fd == -1)
	{
		close(open_fd);
		return (-1);
	}

	close(open_fd);
	return (1);
}
