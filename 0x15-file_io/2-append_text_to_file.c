#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{	int res = 1;

	if (filename == NULL)
		return (-1);

	FILE *file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fputs(text_content, file) == EOF)
		{
			res = -1;
		}
	}
	
	fclose(file);
	return (res);
}
