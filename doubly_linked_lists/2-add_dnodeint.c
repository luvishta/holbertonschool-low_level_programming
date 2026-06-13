#include "lists.h"
/**
  * add_dnodeint -  adds a new node at the beginning
  *@head: pointer to the head
  *@n:num
  * Return: address of the new element or null if fails
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
