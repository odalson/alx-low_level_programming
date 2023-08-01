#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a double pointer to the first element in the linked list
 *
 * Return: deleted data or an empty
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int fig;

	if (!head || !*head)
		return (0);

	fig = (*head)->n;
	begin = (*head)->next;
	free(*head);
	*head = begin;

	return (fig);
}

