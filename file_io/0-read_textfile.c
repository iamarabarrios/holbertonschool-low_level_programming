#include "main.h"

/**
 * read_textfile - prints text of file
 *
 * @filename: name of file
 * @letters: number of characters
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	int length;
	int write_characters;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}

	length = read(file, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	write_characters = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(file);

	if (write_characters != length)
		return (0);

	return (length);
}
