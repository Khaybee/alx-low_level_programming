#include "main.h"

/**
 * read_textfile - function that reads a text file and prints the letters
 * @filename: the name of the file
 * @letters: the numbers of letters it should read and print.
 *
 * Return: numbers of letters printed, if it fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t trd;
	ssize_t twr;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
		return (0);
	}

	trd = read(fp, buff, letters);
	twr = write(STDOUT_FILENO, buff, trd);

	close(fp);
	free(buff);

	return (twr);
}
