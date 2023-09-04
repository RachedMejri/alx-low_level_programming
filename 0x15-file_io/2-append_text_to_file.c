#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - read(nomdef,nomg,mode)in my heart
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t n_written;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		n_written = write(f, text_content, strlen(text_content));
		if (n_written == -1)
			return (-1);
	}
	close(f);
	return (1);
}
