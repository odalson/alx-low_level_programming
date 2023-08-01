#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the unique nodes in a list
 * @head: points to the head of the listint_t to check.
 * @list: the old list to be edited.
 * @size: the size of the latest list - always one greater than the old list
 * @nodes - j
 * Return: take the pointer to the latest list. 
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *bingo, *kham;
	size_t j = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	bingo = head->next;
	kham = (head->next)->next;

	while (kham)
	{
		if (bingo == kham)
		{
			bingo = head;
			while (bingo != kham)
			{
				j++;
				bingo = bingo->next;
				kham = kham->next;
			}

			bingo = bingo->next;
			while (bingo != kham)
			{
				j++;
				bingo = bingo->next;
			}

			return (j);
		}

		bingo = bingo->next;
		kham = (kham->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, pos = 0;

	j = looped_listint_len(head);

	if (j == 0)
	{
		for (; head != NULL; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (pos = 0; pos < j; pos++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (j);
}

