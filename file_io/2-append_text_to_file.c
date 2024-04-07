#include "main.h"
/**
 * append_text_to_file - afdssfsdf
 * @filename: asdfsf
 * @text_content: asfdsfs
 *
 * Return:asdf
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (*(text_content + len))
			len++;
		w = write(fd, text_content, len);
		if (w < 0)
			return (-1);
	}
	else
		return (1);
	close(fd);
	return (1);
}
