#include "main.h"

/**
 * create_file - Creates a text (.txt) file.
 * @fislename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file already created.
 *
 * Return: If the function fails - -1.
 * If not the case, return - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fm, w, slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (slen = 0; text_content[slen];)
			slen++;
	}

	fm = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fm, text_content, slen);

	if (fm == -1 || w == -1)
		return (-1);

	close(fm);

	return (1);
}
