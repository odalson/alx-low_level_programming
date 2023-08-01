#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @head: points to the first node
 * Return: the sum of all the data enlisted
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

