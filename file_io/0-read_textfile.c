#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char buf[500];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return -1;
	n = read(fd, buf, letters);
	if (n == -1)
	{
		close(fd);
		return -1;
	}
	write(STDOUT_FILENO, buf, n);
	close(fd);
	return n;
}
