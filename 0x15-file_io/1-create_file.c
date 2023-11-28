#include "main.h"

/**
 * create_file - create a new file.
 * @filename: name of the file to create.
 * @rtext_content: text to put in the file after creating.
 * Return: 1 if success -1 if not success.
*/

int create_file(const char *filename, char *text_content)
{
	int f_ptr;
	int let_num;
	int f_wr;

	if (!filename)
	{
		return (-1);
	}

	f_ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_ptr == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	let_num = strlen(text_content);
	f_wr - write(f_ptr, text_content, let_num);
	if (f_wr == -1)
	{
		return (-1);
	}

	close(f_ptr);
	return (1);
}
