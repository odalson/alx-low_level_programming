#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlist_t linked list
 * @head:pointer to the head of the list
 * @index: index of th enode to search for, starting from 0
 * Return: nth nodeor null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL)
}
