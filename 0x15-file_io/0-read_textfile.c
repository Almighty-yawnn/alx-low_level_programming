#include "main.h"


/**
 * read_textfile - Function to read a text file and print it.
 * @filename: The pointer to the file name
 * @letters: The number of letters to read and print
 * Return: The actual number of the letters, or 0 if  filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char b[1024];
	int file_d;
	ssize_t num_track = 0, num_read = 0;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, "r");

	if (file_d == -1)
	{
		return (0);
	}

	while ((num_read = read(file_d, b, 1024)) > 0 && num_read < (ssize_t)letters)
	{
		if (write(STDOUT_FILENO, b, num_read) != num_read)
		{
			close(file_d);
			return (0);
		}
		num_track = num_track + num_read;
	}
	close(file_d);
	return (num_track);
}
