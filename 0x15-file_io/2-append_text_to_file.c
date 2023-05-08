#include "main.h"
#include "stdio.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file to be appended.
 * @text_content: the content to append.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int numLet;
	int written;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (numLet = 0; text_content[numLet]; numLet++)
			;

		written = write(fp, text_content, numLet);
		if (written == -1)
		{
			return (-1);
		}
	}

	close(fp);
	return (1);
}
