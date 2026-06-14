#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head:pointer head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
