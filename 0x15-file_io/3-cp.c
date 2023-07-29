#include <stdio.h>
#include <stdlib.h>

void close_file(FILE *file);

int main(int argc, char *argv[]) {
	FILE *source;
	FILE *destination;
        char buffer[4096];
	size_t bytes_read;

	if (argc != 3) 
	{
		fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
		exit(1);
	}
	source = fopen(argv[1], "rb");

	if (!source)
	{
		fprintf(stderr, "Error: Can't open source file '%s'\n", argv[1]);
		exit(2);
	}
	destination = fopen(argv[2], "wb");

	if (!destination)
	{
		fprintf(stderr, "Error: Can't create or write to destination file '%s'\n", argv[2]);
		close_file(source);
		exit(3);
	}

	while ((bytes_read = fread(buffer, 1, sizeof(buffer), source)) > 0)
	{
		size_t bytes_written = fwrite(buffer, 1, bytes_read, destination);

		if (bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: Failed to write to destination file '%s'\n", argv[2]);
			close_file(source);
			close_file(destination);
			exit(4);
		}
	}

	close_file(source);
	close_file(destination);
	printf("File '%s' successfully copied to '%s'\n", argv[1], argv[2]);
	return (0);
}

void close_file(FILE *file)
{
	if (file)
	{
		fclose(file);
	}
}

