#include "main.h"

/**
 * main - copies the content of a file to another file
 * @arc: argument count
 * @arv: arguments as strings
 * Return: 0
 */
int main(int arc, char *arv[])
{
	int i_fd, o_fd, ists, osts;
	char buf[MAXSIZE];
	mode_t perm;

	perm = 00400 | 00200 | 00040 | 00020 | 00004;
	if (arc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	i_fd = open(arv[1], O_RDONLY);
	if (i_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]), exit(98);
	o_fd = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (o_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]), exit(99);
	do {
		ists = read(i_fd, buf, MAXSIZE);
		if (ists == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
			exit(98);
		}
		if (ists > 0)
		{
			osts = write(o_fd, buf, ists);
			if (osts == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
				exit(99);
			}
		}
	} while (ists > 0);
	ists = close(i_fd);
	if (ists == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i_fd), exit(100);
	osts = close(o_fd);
	if (osts == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_fd), exit(100);
	return (0);
}
