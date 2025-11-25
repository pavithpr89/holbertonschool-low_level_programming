#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
int len, i;

while (h)
{
if (!h->str)
{
write(1, "[0] (nil)\n", 11);
}
else
{
/* calculate string length manually */
len = 0;
while (h->str[len])
len++;

/* print [len] string\n */
write(1, "[", 1);

/* print length as number */
{
char num[20];
int j = 0, tmp = len;
if (tmp == 0)
write(1, "0", 1);
else
{
while (tmp)
{
num[j++] = (tmp % 10) + '0';
tmp /= 10;
}
while (j--)
write(1, &num[j], 1);
}
}

write(1, "] ", 2);
for (i = 0; i < len; i++)
write(1, &h->str[i], 1);
write(1, "\n", 1);
}
h = h->next;
count++;
}

return (count);
}
