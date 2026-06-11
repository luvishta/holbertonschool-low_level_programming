#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  * add_node -  adds a new node at the beginning of a list
  *@str: the string
  *@head: head pointer
  *Return: the address of the new element or null if fails
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = 0;
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
			new->next = *head;
			*head = new;

			return (new);
}
