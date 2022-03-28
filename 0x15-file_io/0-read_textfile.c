#include "main.h"
/**
 *read_textfile - read file a write
 *@filename: string
 *@letters: size
 *Return: size_t
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters);
	size_t cont = 0;
	if(filename == NULL)
		return (0)
	if (fd == -1)
		return (0);
	if (buf == NULL)
		return (0);
	cont = read(fd, buf, letters);
	write(0, buf, letters);
	close(fd);
	return (cont);
}
