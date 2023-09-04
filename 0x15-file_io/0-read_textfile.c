#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read the text file
 * @filename: file name
 * @letters: numbers to be printed
 *
 * Return: numbers printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t reading, writingnum;
	char *temp;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (!temp)
		return (0);

	reading = read(f, temp, letters);
	if (reading == -1)
		return (0);

	writingnum = write(STDOUT_FILENO, temp, reading);
	if (writingnum != reading || writingnum == -1)
		return (0);
	close(f);
	return (writingnum);
}
