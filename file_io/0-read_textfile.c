#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
* Return: the actual number of letters it could read and print, if it fails 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_description;
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_description = open(filename, O_RDONLY);
	if (file_description == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_description);
		return (0);
	}

	read_bytes = read(file_description, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_description);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1)
	{
		free(buffer);
		close(file_description);
		return (0);
	}

	free(buffer);
	close(file_description);

	return (write_bytes);
}
