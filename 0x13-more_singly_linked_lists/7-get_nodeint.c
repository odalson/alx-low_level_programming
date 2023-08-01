#include "lists.h"

/**
 * get_nodeint_at_index - shows the index of any node in  a linked list
 * @head: points to the first node
 * @index: index of the node
 * Return: pointer to the node sought for, or a NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}

