#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

void exit_with_error(char *message, int error_code, ...);

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, or one of the above error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		exit_with_error(USAGE, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_with_error(READ_ERROR, 98, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_with_error(WRITE_ERROR, 99, argv[2]);

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		if (write(fd_to, buffer, n_read) != n_read)
			exit_with_error(WRITE_ERROR, 99, argv[2]);

	if (n_read == -1)
		exit_with_error(READ_ERROR, 98, argv[1]);

	if (close(fd_from) == -1)
		exit_with_error(CLOSE_ERROR, 100, fd_from);

	if (close(fd_to) == -1)
		exit_with_error(CLOSE_ERROR, 100, fd_to);

	return (0);
}

/**
 * exit_with_error - Exits the program with an error message and error code
 * @message: The error message to print
 * @error_code: The error code to exit with
 */
void exit_with_error(char *message, int error_code, ...)
{
	va_list args;

	va_start(args, error_code);
	vdprintf(STDERR_FILENO, message, args);
	va_end(args);

	exit(error_code);
}
