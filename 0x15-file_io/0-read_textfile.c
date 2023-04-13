#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX standard output
 * @filename: name of file
 * @letters: number of letters to be read and printed
 * Return:0 if the file cannot be opened , or is NULL or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fx;
	ssize_t num_written;
	ssize_t num_read;

	fx = open(filename, O_RDONLY);
	if (fx == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	num_read = read(fx, buffer, letters);
	num_written = write(STDOUT_FILENO, buffer, num_read);

	free(buffer);
	close(fx);
	return (num_written);
}

