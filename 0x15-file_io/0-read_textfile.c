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
	ssize_t op;
	ssize_t re;
	ssize_t wr;
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

	op = open(filename, O_RDONLY);
	re = read(op, BUF, letters);
	wr = write(STDOUT_FILENO, BUF, re);

	if (re != wr || op == -1 || re == -1 || wr == -1)
	{
		free(BUF);
		return (0);
	}

	free(BUF);
	close(op);
	return (wr);
}
