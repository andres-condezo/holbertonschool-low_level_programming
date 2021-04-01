#include "holberton.h"

/**
 * read_textfile -  Reads a text
 * file and prints it to the POSIX standard output.
 * @filename: array of chars to be readed.
 * @letters: size of the array.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_fd, read_fd, write_fd;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}


	if (filename == NULL)
	{
		return (0);
	}

	open_fd = open(filename, O_RDONLY);

	if (open_fd == -1)
	{
		return (0);
	}

	read_fd = read(open_fd, buf, letters);

	if (read_fd == -1)
	{
		return (0);
	}

	write_fd = write(STDOUT_FILENO, buf, read_fd);

	if (write_fd == -1)
	{
		return (0);
	}

	close(open_fd);
	close(read_fd);
	close(write_fd);
	free(buf);

	return (write_fd);

}

