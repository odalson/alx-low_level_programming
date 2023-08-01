#include "lists.h"

/**
 * reverse_listint - a function to  reverses a linked list
 * @head: points to the first node in the list
 *
 * Return: a pointer to the first node in the new reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}

	*head = before;

	return (*head);
}


