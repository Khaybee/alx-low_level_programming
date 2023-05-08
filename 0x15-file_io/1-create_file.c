#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create.
 * @text_content: the content to write to the file.
 *
 * Return: 1 if it success, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int twrr;
	int fp;
	int numLet;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (numLet = 0; text_content[numLet]; numLet++)
		;

	twrr = write(fp, text_content, numLet);

	if (twrr == -1)
	{
		return (-1);
	}

	close(fp);
	return (1);
}
