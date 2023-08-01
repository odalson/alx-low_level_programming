#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: figure of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

