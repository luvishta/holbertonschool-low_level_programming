#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node to a given index
 * @h: pointer to head
 * @idx: position to insert
 * @n: value
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	dlistint_t *first_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		first_node = *h;
		new_node->prev = NULL;
		new_node->next = first_node;

		if (first_node != NULL)
			first_node->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;
	if (current == NULL)
	{
	free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
