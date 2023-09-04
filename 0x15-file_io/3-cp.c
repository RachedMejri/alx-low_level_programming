#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

void exiterror(char *message, int error_code, ...);

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, or one of the above error codes on failure
 */
int main(int argc, char *argv[])
{
	int ffrom, tto;
	ssize_t redern;
	char temp[BUFFER_SIZE];

	if (argc != 3)
		exiterror(USAGE, 97);
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
		exiterror(READ_ERROR, 98, argv[1]);
	tto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (tto == -1)
		exiterror(WRITE_ERROR, 99, argv[2]);
	while ((redern = read(ffrom, temp, BUFFER_SIZE)) > 0)
		if (write(tto, temp, redern) != redern)
			exiterror(WRITE_ERROR, 99, argv[2]);
	if (redern == -1)
		exiterror(READ_ERROR, 98, argv[1]);
	if (close(ffrom) == -1)
		exiterror(CLOSE_ERROR, 100, ffrom);
	if (close(tto) == -1)
		exiterror(CLOSE_ERROR, 100, tto);
	return (0);
}

/**
 * exit_with_error - Exits the program with an error message and error code
 * @message: The error message to print
 * @error_code: The error code to exit with
 */
void exiterror(char *message, int error_code, ...)
{
	va_list args;

	va_start(args, error_code);
	vdprintf(STDERR_FILENO, message, args);
	va_end(args);

	exit(error_code);
}
