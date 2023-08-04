#include "main.h"

/**
*main - copies the content of a file to another file
*@argc: int
*@argv: char
*Return: 0-
*/

int main(int argc, char *argv[])
{
	int file_to;
	int file_from;
	char buff[1024];
	ssize_t byrd;
	ssize_t bywr;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (byrd != 0)
	{
		byrd = read(file_from, buff, 1024);
		if (byrd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bywr = write(file_to, buff, byrd);
		if (bywr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	return (0);
}
