#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t writingnum;
	size_t len;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		writingnum = write(f, text_content, len);
		if (writingnum == -1)
			return (-1);
	}
	close(f);
	return (1);
}
