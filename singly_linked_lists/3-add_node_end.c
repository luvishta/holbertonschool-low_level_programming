#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
  *add_node_end - adds a new node at the end of a list
  *@str: the string
  *@head: head pointer
  *Return: the address of the new element or null if fails
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = 0;
	list_t *temp;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
			if (new == NULL)
			return (NULL);
			new->str = strdup(str);
			if (new->str == NULL)
			{
				free(new);
				return (NULL);
			}
			for (len = 0; str[len] != '\0'; len++)
			{
			}
			new->len = len;
			new->next = NULL;

			if (*head == NULL)
			{
				*head = new;
				return (new);
			}

			temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

			return (new);
}
