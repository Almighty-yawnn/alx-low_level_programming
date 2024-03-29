#include "main.h"
/**
 * read_textfile - Function to read a text file and print it.
 * @filename: The pointer to the file name
 * @letters: The number of letters to read and print
 * Return: The actual number of the letters, or 0 if  filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
