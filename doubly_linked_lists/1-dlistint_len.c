#include "lists.h"
/**
  * dlistint_len - returns num of element
  *@h: pointer to the head
  * Return:	num of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; h = h->next)
		len++;
	return (len);
}
