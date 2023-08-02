#include "main.h"

/**
 *append_text_to_file - add text at the end of a file
 *@filename: char
 *@text_content: char
 *Return:1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (1);
	}

	length = write(file, text_content, strlen(text_content));
	close(file);

	if (length >= 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
/**return (success >= 0) ? 1 : -1; */
