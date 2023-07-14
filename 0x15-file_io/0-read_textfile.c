#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - Reads a text file
 *@filename:A pointer to the file.
 *@letters:number of letters
 *
 *
 *Return:fail
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t p, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	r = read(p, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (p == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(p);

	return (w);
}
