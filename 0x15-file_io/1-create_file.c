#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - function to create a file
 * @filename: The name of the file to be created
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	size_t l;
	ssize_t num_track;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY, 0600);

	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}

	l = strlen(text_content);
	num_track = write(file_d, text_content, l);

	if (num_track != (ssize_t)l)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
