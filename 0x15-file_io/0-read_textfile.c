#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and prints it to stdout
 * @filename: Pointer of the file to be read
 * @letters: letters to be read
 * Return: Inacse there's function failure - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
