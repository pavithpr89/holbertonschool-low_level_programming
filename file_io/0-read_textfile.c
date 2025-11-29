#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buffer;

if (!filename || letters == 0)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(letters);
if (!buffer)
{
close(fd);
return (0);
}

r = read(fd, buffer, letters);
if (r == -1)
{
free(buffer);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buffer, r);
if (w != r)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (w);
}
