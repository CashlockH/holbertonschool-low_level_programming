#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - adsfsaf
 * @filename: asdfsaf
 * @letters: asdfsaf
 * Return: asdfas
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int n, w;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	n = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, n);
	close(fd);
	return (w);
}
