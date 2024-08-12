#include "main.h"

/**
  * read_textfile - function reads a text file and prints to output
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: returns number of letters if successful,0 if fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptf, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	ptf = open(filename, O_RDONLY, 0600);
	if (ptf == -1)
		return (0);

	readed = read(ptf, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(ptf);
	return (readed);
}
