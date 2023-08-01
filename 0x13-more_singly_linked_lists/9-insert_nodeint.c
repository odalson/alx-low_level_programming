#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: the first nodes pointer 
 * @idx: index of the latest node added
 * @n: value for the latest node
 * vol: volatile(temp)
 *
 * Return: pointer to the address of the latest node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *latest;
	listint_t *vol = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest || !head)
		return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
		return (latest);
	}

	for (j = 0; vol && j < idx; j++)
	{
		if (j == idx - 1)
		{
			latest->next = vol->next;
			vol->next = latest;
			return (latest);
		}
		else
			vol = vol->next;
	}

	return (NULL);
}

