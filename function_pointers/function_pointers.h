#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, or -1 on error.
 */
int _putchar(char c);

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to a function that takes a string and returns nothing
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
