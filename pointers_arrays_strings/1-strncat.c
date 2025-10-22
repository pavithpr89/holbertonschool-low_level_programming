#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: maximum number of bytes to append from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* Find the end of dest */
while (dest[i] != '\0')
i++;

/* Append at most n bytes from src */
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

/* Add terminating null byte */
dest[i] = '\0';

return (dest);
}
