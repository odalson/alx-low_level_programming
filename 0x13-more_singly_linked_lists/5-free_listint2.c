#include "lists.h"

/**
 * free_listint2 - gets to free a linked list
 * @head: pointer to the list that is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *melvin;

	if (head == NULL)
		return;
	while (*head)
	{
		melvin = (*head)->next;
		free(*head);
		*head = melvin;
	}

	*head = NULL;
}

