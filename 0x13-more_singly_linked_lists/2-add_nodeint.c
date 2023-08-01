#include "lists.h"

/**
 * add_nodeint - This adds a new node at the start of a linked list
 * @head: serves as a pointer to the first node in the list
 * @n: Reps a data to insert in that new node
 *
 * Return: a pointer to the new node, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	if (head == NULL)
		return (NULL);
	pointer = malloc(sizeof(listint_t));
	if (pointer == NULL)
		return (NULL);
	pointer->n = n;
	pointer->next = *head;
	*head = pointer;
	return (pointer);
}

