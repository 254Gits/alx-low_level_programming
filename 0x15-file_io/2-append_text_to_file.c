#include "main.h"
/**
 *append_text_to_file - Creates a file
 *@filename: A pointer to the name of the file to create.
 *@text_content: A pointer to a string
 *
 *Return:-1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, s, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	s = write(p, text_content, len);

	if (p == -1 || s == -1)
		return (-1);
	close(p);

	return (1);
}
