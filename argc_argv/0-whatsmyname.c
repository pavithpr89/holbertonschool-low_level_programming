#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name followed by a new line
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
