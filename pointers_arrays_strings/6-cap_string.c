#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
int i, j;
char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}', '\0'};

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
else
{
for (j = 0; sep[j] != '\0'; j++)
{
if (s[i - 1] == sep[j] &&
(s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - ('a' - 'A');
break;
}
}
}
}

return (s);
}
