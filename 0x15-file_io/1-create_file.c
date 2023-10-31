#include "main.h"

/**
 * create_file - fxn create file and write a given
 * string to it
 * @filename: the pointer to file to be created
 * @text_content: text string to be copied
 * Return: 1 on success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int num_write, fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDONLY, O_CREAT, O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	len = 0;
	while (text_content[len])
		len++;
	
	num_write = write(fd, text_content, len);

	if (num_write == -1)
		return (-1);

	close(fd);
	return (1);
}
