#include "lists.h"
/**
  *print_dlistint - prints all the elements
  *@h: pointer to the lists
  *Return: the number of the nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		total++;
		h =	h->next;
	}
	return (total);
}
