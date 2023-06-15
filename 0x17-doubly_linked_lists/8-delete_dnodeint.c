#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: head node
 * @index: index of the node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if(index == 0)
	{
		temp = (*head)->next;
		temp->prev = NULL;
		temp->next->prev = temp;
		free(*head);
		*head = temp;
		return (1);
	}

	curr = *head;
	for (i = 0; i < index; i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}

	if (*head == NULL)
		return (-1);

	temp = curr;
	if (temp->prev != NULL)
	  temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
