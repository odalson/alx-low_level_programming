#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: head of a double pointer
 * @n: data to insert in the new element
 *
 * Return: pointer to the latest node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *temp;

	if (!head)
		return (NULL);
	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = latest;

	return (latest);
}

