#include "main.h"

/**
 * append_text_to_file - function that append text to a file.
 * @filename: file to to open and append to.
 * @text_content: text to add.
 * Return: 1 if success, -1 if failed.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
	}
	else
	{
		return (-1);
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);
	return (1);
}
