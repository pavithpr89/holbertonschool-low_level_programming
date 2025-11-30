#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t w;
size_t len = 0;

if (!filename)
return (-1);

/* Open file in append mode, DO NOT create if it doesn't exist */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* If text_content is NULL → do nothing, file exists so return 1 */
if (!text_content)
{
close(fd);
return (1);
}

/* Get content length */
while (text_content[len])
len++;

/* Write to file */
w = write(fd, text_content, len);
if (w != (ssize_t)len)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
