#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the first element in the list
 * @index:node to delete index ie the index of the node deleted 
 * Return: 1 for SUCCESS, or -1 for FAILURE
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *bing = *head;
	listint_t *newest = NULL;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(bing);
		return (1);
	}

	while (num < index - 1)
	{
		if (!bing || !(bing->next))
			return (-1);
		bing = bing->next;
		num++;
	}
	newest = bing->next;
	bing->next = newest->next;
	free(newest);

	return (1);
}

