#include "main.h"

/**
 * error_exit - Prints an error message and exits with the given status.
 * @status: The exit status.
 * @message: The error message format.
 * @arg: The argument for the error message format.
 */
void error_exit(int status, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(status);
}

/**
 * error_exit_fd - Prints an error message and exits with the given status
 * @status: The exit status.
 * @message: The error message format.
 * @arg: The argument for the error message format.
 */
void error_exit_fd(int status, const char *message, int arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(status);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, exits with appropriate code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((rd = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(file_to, buffer, rd);
		if (wr != rd)
		{
			close(file_from);
			close(file_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (rd == -1)
	{
		close(file_from);
		close(file_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_from) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
