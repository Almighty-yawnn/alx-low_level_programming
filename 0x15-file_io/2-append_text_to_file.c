#include "main.h"

/**
 * append_text_to_file - Function to apppend text at the end of a file
 * @filename: The name of the file
 * @text_content: ThE NULL terminated string to add at the end
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_d;
	size_t l;

	if (filename == NULL)
		return (-1);

	file_d = fopen(filename, "r");
	if (file_d == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		l = strlen(text_content);
		fwrite(text_content, sizeof(char), l,  file_d);
	}
	fclose(file_d);
	return (1);
}
