#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + dlistint_len(h->next));
}
