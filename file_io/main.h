#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Allowed function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif /* MAIN_H */
