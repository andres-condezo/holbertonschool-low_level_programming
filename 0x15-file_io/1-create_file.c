#include "holberton.h"

/**
 * create_file - A function that creates a file.
 * @filename: The name to the file to create.
 * @text_content: The array to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int open_fd, write_fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	open_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

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
