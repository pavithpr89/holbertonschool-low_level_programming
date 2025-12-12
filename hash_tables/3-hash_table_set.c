#include "hash_tables.h"

/**
 * update_value - updates value of existing key
 * @node: the hash node to update
 * @value: new value
 *
 * Return: 1 if success, 0 if failure
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);

	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;

	return (1);
}

/**
 * create_node - creates a new hash node
 * @key: key string
 * @value: value string
 *
 * Return: pointer to new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key string
 * @value: value string
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *current;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

/* update existing key */
while (current)
{
if (strcmp(current->key, key) == 0)
return (update_value(current, value));

current = current->next;
}

/* create new node */
node = create_node(key, value);
if (node == NULL)
return (0);

/* insert at beginning (collision handling) */
node->next = ht->array[index];
ht->array[index] = node;

return (1);
}
