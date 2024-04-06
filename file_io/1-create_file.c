#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file_description, len, write_int;

	if (filename == NULL)
		return (-1);

	file_description = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_description == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_description);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_int = write(file_description, text_content, len);
	if (write_int == -1)
	{
		close(file_description);
		return (-1);
	}

	close(file_description);
	return (1);
}
