#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *curr_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[indx] == NULL)
		return (NULL);

	curr_node = ht->array[indx];
	while (curr_node)
	{
		if (strcmp(key, curr_node->key) == 0)
			return (curr_node->value);
		curr_node = curr_node->next;
	}

	return (NULL);
}
