#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[500];
	int fd = open(filename, O_RDONLY);
	size_t n = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, n);
	close(fd)
	return n;
}
