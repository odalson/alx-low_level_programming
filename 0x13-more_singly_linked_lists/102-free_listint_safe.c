#include "lists.h"

/**
 * free_listint_safe - makes a linked list free
 * @h: points to the start node on the linked list
 *
 * Return: number of elements in the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *off;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
		       off = (*h)->next;
			free(*h);
			*h = off;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}


