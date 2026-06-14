#include "lists.h"

/**
 * sum_dlistint - returns the sum
 * @head: head of the list
 *
 * Return: sum , or 0 if it is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	unsigned int i;


	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
