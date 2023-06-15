#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
