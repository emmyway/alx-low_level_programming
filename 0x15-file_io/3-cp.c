#include "main.h"
#define BUFF_SIZE 1024

/**
 * exit_error - function prints error to std error
 * @msg: the message to be pinted
 * @exit_code: the exit code
 */
void exit_error(const char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}


/**
 * main - fxn copies one file to another
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest, check, num_read, num_wr;
	const char *file_source, *file_dest;
	char *buffer[BUFF_SIZE];

	if(argc != 3)
		exit_error("Usage: cp file_from file_to\n", 97);

	file_source = argv[1];
	file_dest = argv[2];

	/*open file and check for error*/
	fd_source = open(file_source, O_RDONLY);
	if (fd_source == -1)
		exit_error("Error: Can't read from file file_source\n", 98);

	fd_dest = open(file_dest, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0644);
	if (fd_dest == -1)
		exit_error("Error: Can't wtite to file_dest\n", 99);

	check = 1;
	while (check > 0)
	{
		num_read = read(fd_source, buffer, BUFF_SIZE);
		if (num_read == -1)
			exit_error("Error: Can't read from file file_source\n", 98);

		num_wr = write(fd_dest, buffer, num_read);
		if (num_wr == -1)
			exit_error("Error: Can't wtite to file_dest\n", 99);

		check = num_read;
	}

	close(fd_source);
	close (fd_dest);

	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	return (0);
}
