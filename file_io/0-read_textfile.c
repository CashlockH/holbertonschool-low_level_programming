#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t written, n, total;
	int fd;
	char buf[500];
	if (filename == NULL)
	{
		return 0;
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return 0;
	}
	total = 0;

	while ((n = read(fd, buf, sizeof(buf))) > 0)
	{
		written = write(STDOUT_FILENO, buf, n);
		if (written == -1 || written != n)
		{
			close(fd);
			return 0;
		}
		total += written;
		if (total >= letters)
			break;
	}
		close(fd);
	if (n == -1)
	{
		return 0;
	}
	return total;
}
