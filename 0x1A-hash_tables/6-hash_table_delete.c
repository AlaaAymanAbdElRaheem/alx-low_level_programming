#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
  hash_node_t *curr_node, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];
		while (curr_node)
		{
		  if (curr_node->key)
		    {
				free(curr_node->key);
				free(curr_node->value);
				temp = curr_node->next;
				free(curr_node);
				curr_node = temp;
					}
			else
				curr_node = curr_node->next;
		}
	}
	free(ht->array);
	free(ht);
}
