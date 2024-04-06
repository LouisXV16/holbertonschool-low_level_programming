#include "main.h"

/**
* append_text_to_file - appends text to a file
* @filename: name of the file to append text to
* @text_content: NULL terminated string to append to the file
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_description, len, write_int;

	if (filename == NULL)
		return (-1);

	file_description = open(filename, O_WRONLY | O_APPEND);
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
