#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a text file.
 * @filename: A pointer to the name of the file we created.
 * @text_content: The string to add to the end of the created file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *  If the file does not exist then user lacks write permission - -1.
 *  Else if it does exist, - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (slen = 0; text_content[slen];)
			slen++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, slen);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
