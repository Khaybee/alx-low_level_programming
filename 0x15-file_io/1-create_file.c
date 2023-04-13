#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - craetes a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write tothe file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fx, byte_written, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fx = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IWUSR);

	if (fx == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		byte_written = write(fx, text_content, len);

		if (byte_written == -1 || byte_written != len)
		{
			close(fx);
			return (-1);
		}

	}

	close(fx);
	return (1);
}
