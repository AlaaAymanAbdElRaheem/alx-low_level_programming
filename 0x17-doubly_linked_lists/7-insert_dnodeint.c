#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head node
 * @idx: index of the list where the new node should be added.starts at 0
 * @n: new node
 * Return: adress of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
				     unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head != NULL)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;


	return (new_node);
}
