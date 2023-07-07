#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr_node;
	unsigned long int i = 0, first = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];
		while (curr_node)
		{
			if (first != 0)
				printf(", ");
			printf("'%s' : '%s'", curr_node->key, curr_node->value);
			curr_node = curr_node->next;
			first = 1;
		}
	}
	printf("}\n");
}
