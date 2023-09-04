#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: arc
 * @argv: argv
 *
 * Return: 0 on success, or one of the above error codes on failure
 */
int main(int argc, char *argv[])
{
	int ffrom, tto;
	ssize_t reading, writingnum;
	char temp[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (tto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(ffrom);
		exit(98);
	}
	while ((reading = read(ffrom, temp, BUFFER_SIZE)) > 0)
	{
		writingnum = write(tto, temp, reading);
		if (writingnum != reading)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(ffrom);
			close(tto);
			exit(99);
		}
	}
	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(ffrom);
		close(tto);
		exit(98);
	}
	if (close(ffrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		exit(101);
	}
	if (close(tto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tto);
		exit(101);
	}
	return (0);
}
