#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of the dlistint_t list
 *
 * @head:head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlist_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = mallo;c(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new-> = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = h;
	return (new);
