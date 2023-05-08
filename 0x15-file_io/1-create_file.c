#include "main.h"

/**
 * create_file - A file is create.
 * @filename: Pointer to the created file.
 * @text_content: Pointer to the content to be written.
 *
 * Return: If successful 1, if it fails -1.
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
