#include "main.h"
/**
 * read_textfile - Function to read a text file and print it.
 * @filename: The pointer to the file name
 * @letters: The number of letters to read and print
 * Return: The actual number of the letters, or 0 if  filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	FILE *file_d;
	ssize_t num_track, num_read;

	if (filename == NULL)
		return (0);

	file_d = fopen(filename, "r");
	if (file_d == NULL)
		return (0);
	b = malloc(letters + 1);
	if (b == NULL)
	{
		fclose(file_d);
		return (0);
	}
	num_read = fread(b, sizeof(char), letters, file_d);
	if (num_read == 0)
	{
		free(b);
		fclose(file_d);
		return (0);
	}
	num_track = fwrite(b, sizeof(char), num_read, stdout);
	if (num_track != num_read)
	{
		free(b);
		fclose(file_d);
		return (0);
	}
	free(b);
	fclose(file_d);
	return (num_read);
}
