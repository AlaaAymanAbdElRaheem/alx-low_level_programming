#include "lists.h"

/**
 * list_len - unction that returns the number of elements in a linked list.
 * @h: a singly linked list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
