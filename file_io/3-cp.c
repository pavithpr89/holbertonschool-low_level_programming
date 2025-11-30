#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * close_fd - closes a file descriptor safely
 * @fd: file descriptor
 */
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * read_from_file - reads into buffer
 * @fd: file descriptor
 * @buffer: buffer
 * Return: number of bytes read
 */
ssize_t read_from_file(int fd, char *buffer)
{
ssize_t r = read(fd, buffer, BUFFER_SIZE);

if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}

return (r);
}

/**
 * write_to_file - writes data to file
 * @fd: destination file
 * @buffer: data
 * @len: length to write
 */
void write_to_file(int fd, char *buffer, ssize_t len)
{
if (write(fd, buffer, len) != len)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
exit(99);
}
}

/**
 * copy_file - handles copy process
 * @from: source filename
 * @to: dest filename
 */
void copy_file(char *from, char *to)
{
int fd_from, fd_to;
ssize_t r;
char buffer[BUFFER_SIZE];

fd_from = open(from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
exit(98);
}

fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
close_fd(fd_from);
exit(99);
}

while ((r = read_from_file(fd_from, buffer)) > 0)
write_to_file(fd_to, buffer, r);

close_fd(fd_from);
close_fd(fd_to);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO,
"Usage: cp file_from file_to\n");
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
