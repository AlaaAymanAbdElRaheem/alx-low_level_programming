#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */


shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	shash_node_t **arr;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	arr = malloc(sizeof(shash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	new_table->size = size;
	new_table->array = arr;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * create_node - creats new node
 * @key: key
 * @value: value
 * Return: new_node
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	shash_node_t *new_node = NULL, *curr_node = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	new_node = create_node(key, value);
	if (ht->array[indx] == NULL)
	{
		ht->array[indx] = new_node;
		if (ht->shead == NULL && ht->stail == NULL)
		{
			ht->shead = new_node;
			ht->stail = new_node;
			return (1);
		}
		sort_table(ht, new_node);
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
	sort_table(ht, new_node);
	return (1);
}

/**
 * sort_table - sort nodes in hash table
 * @ht: hash table
 * @node: node to be sorted
 */

void sort_table(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *curr_node;

	if (strcmp(node->key, ht->shead->key) < 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		curr_node = ht->shead;
		while (curr_node && strcmp(node->key, curr_node->key) > 0)
			curr_node = curr_node->snext;
		if (curr_node == NULL)
		{
			node->snext = NULL;
			node->sprev = ht->stail;
			ht->stail->snext = node;
			ht->stail = node;
		}
		else
		{
			node->snext = curr_node;
			node->sprev = curr_node->sprev;
			if (curr_node->sprev != NULL)
				curr_node->sprev->snext = node;
			curr_node->sprev = node;
		}
	}
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int indx;
	shash_node_t *curr_node;

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

/**
 * shash_table_print - function that prints a hash table.
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr_node;
	int first = 0;

	if (ht == NULL)
		return;

	curr_node = ht->shead;
	printf("{");
	while (curr_node)
	{
		if (first != 0)
			printf(", ");
		printf("'%s': '%s'", curr_node->key, curr_node->value);
		curr_node = curr_node->snext;
		first = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a hash table.
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr_node;
	int first = 0;

	if (ht == NULL)
		return;

	curr_node = ht->stail;
	printf("{");
	while (curr_node)
	{
		if (first != 0)
			printf(", ");
		printf("'%s': '%s'", curr_node->key, curr_node->value);
		curr_node = curr_node->sprev;
		first = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr_node, *temp;
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
