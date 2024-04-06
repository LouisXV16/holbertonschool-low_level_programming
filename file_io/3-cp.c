#include "main.h"

/**
* cp - copies the content of a file to another file
* @file_from: file to copy from
* @file_to: file to copy to
* Return: 1 on success, -1 on failure
*/

int cp(const char *file_from, const char *file_to)

{
	int file_description_from, file_description_to, read_int, write_int;

	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
		return (-1);

	file_description_from = open(file_from, O_RDONLY);
	if (file_description_from == -1)
		return (-1);

	file_description_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_description_to == -1)
		return (-1);

	while ((read_int = read(file_description_from, buffer, 1024)) > 0)
	{
		write_int = write(file_description_to, buffer, read_int);
		if (write_int == -1)
			return (-1);
	}

	if (read_int == -1)
		return (-1);

	if (close(file_description_from) == -1)
		return (-1);

	if (close(file_description_to) == -1)
		return (-1);

	return (1);
}
