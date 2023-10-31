#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Will read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fm;
	ssize_t w;
	ssize_t t;

	fm = open(filename, O_RDONLY);
	if (fm == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fm, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fm);
	return (w);
}
