#include "main.h"

/**
 * read_textfile - function reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the fike to be read
 * @letters: the number of letters to be read
 * Return: the actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t num_read, num_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	num_read = read(fd, buffer, letters);
	num_written = write(STDOUT_FILENO, buffer, num_read);

	close(fd);
	free(buffer);

	return (num_written);
}
