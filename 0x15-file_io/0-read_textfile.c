#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file to open.
 * @letters: num of letter the fun can print.
 * Return: if failed - 0
 * output the file content.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open;
	ssize_t read;
	ssize_t write;
	char *BUF;

	if (!filename)
	{
		return (0);
	}

	BUF = malloc(sizeof(char) * letters);
	if (!BUF)
	{
		return (0);
	}

	open = open(filename, O_RDONLY);
	read = read(o, buffer, letters);
	write = write(STDOUT_FILENO, buffer, r);

	if (read != write || open == -1 || read == -1 || write == -1)
	{
		free(BUF);
		return (0);
	}

	free(BUF);
	close(open);
	return (write);
}
