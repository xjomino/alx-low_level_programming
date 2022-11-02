#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string
 * to write to the file
 * Return: 1 on success, -1 on failure
 * file can not be created, file can not
 * be written, write “fails”
 * permissions: 600
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, readsts, k;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0400 | 0200);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (k = 0; text_content[k] != '\0'; k++)
			;
		readsts = write(fd, text_content, k);
		if (readsts == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
