#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[500];
	int fd = (filename, O_RDONLY);
	int n = read(fd, buf, letters);
	return 0;
}
