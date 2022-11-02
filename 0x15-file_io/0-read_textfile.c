#include "main.h"
/**
 * read_textfile -function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file to read
 * @letters: chars to read
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected
 * amount of bytes, return 0
 * Return: filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readfunc, writefunc;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	readfunc = read(fd, buffer, letters);
	if (readfunc == -1)
		return (0);
	writefunc = write(STDOUT_FILENO, buffer, readfunc);
	if (writefunc == -1 || readfunc != writefunc)
		return (0);
	free(buffer);
	close(fd);
	return (writefunc);


}
