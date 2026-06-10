#include "lists.h"
#include <stdio.h>
/**
*print_list - prints all the elements
*@h: pointer to the header
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t total = 0;

	for (total = 0; h != NULL; total++)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	h = h->next;
}
return (total);
}
