#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - adfas
 * @filename:fadf
 * @text_content:asdfasf
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
		while (*(text_content + len))
			len++;
	else
	{
		close(fd);
		return (1);
	}

	w = write(fd, text_content, len);
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
