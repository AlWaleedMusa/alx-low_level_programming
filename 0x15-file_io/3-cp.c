#include "main.h"

/**
 * err_check - check for file availability.
 * @file_from: from file.
 * @file_to: to file.
 * @argv: arg array.
 * Return: nothing.
 */

void err_check(int file_from, int file_to, char *argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point.
 * @argc: num of arguments passed.
 * @argv: array of arguments.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv)
{
	int file_from, file_to, close_err;
	ssize_t chars_num, wr_f;
	char BUF[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_check(file_from, file_to, argv);

	chars_num = 1024;
	while (chars_num == 1024)
	{
		chars_num = read(file_from, BUF, 1024);
		if (chars_num == -1)
			err_check(-1, 0, argv);
		wr_f = write(file_to, BUF, chars_num);
		if (wr_f == -1)
			err_check(0, -1, argv);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		exit(100);
	}
	return (0);
}
