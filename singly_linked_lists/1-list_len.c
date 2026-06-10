#include "lists.h"
#include <stdio.h>

/**
  *list_len - function that returns the number of elements
  *@h: points to the header
  *Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h =	h->next;
	}
	return (total);
}
