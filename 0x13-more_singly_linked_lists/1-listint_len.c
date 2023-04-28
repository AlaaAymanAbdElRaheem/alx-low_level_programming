#include "lists.h"

/**
 * listint_len - function that prints number of elements of a list.
 * @h: a singly linked list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
