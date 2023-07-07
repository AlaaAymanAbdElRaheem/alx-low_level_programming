#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *new_node = NULL, *curr_node = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[indx] == NULL)
	{
		ht->array[indx] = new_node;
		return (1);
	}

	curr_node = ht->array[indx];
	while (curr_node)
	{
		if (strcmp(key, curr_node->key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		curr_node = curr_node->next;
	}


	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;

	return (1);
}
