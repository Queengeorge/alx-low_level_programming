#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- it reads text file and print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters being read
 *
 * Return: w- no of bytes to be read and should print (0) if function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	ssize_t fd;

	ssize_t w;

	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)

		return (0);

	buf = malloc(sizeof(char) * letters);

	t = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

