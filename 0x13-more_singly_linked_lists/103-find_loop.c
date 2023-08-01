#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the start of the list
 *
 * Return: address of the node where the loop begins, or NULL where it does not
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sluggish = head;
	listint_t *rapid = head;

	if (!head)
		return (NULL);

	while (sluggish && rapid && rapid->next)
	{
		rapid = rapid->next->next;
		sluggish = sluggish->next;
		if (rapid == sluggish)
		{
			sluggish = head;
			while (sluggish != rapid)
			{
				sluggish = sluggish->next;
				rapid = rapid->next;
			}
			return (rapid);
		}
	}

	return (NULL);
}



