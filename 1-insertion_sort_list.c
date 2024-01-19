#include "sort.h"

/**
 *insertion_sort_list - insertion sort style on a linked list
 *@list: double pointer to the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *swap, *previous;

	if (!list || !*list)
		return;

	current = *list;
	while ((current = current->next))
	{
		swap = current;
		while (swap->prev && swap->n < swap->prev->n)
		{
			previous = swap->prev;
			if (swap->next)
				swap->next->prev = previous;
			if (previous->prev)
				previous->prev->next = swap;
			else
				*list = swap;
			previous->next = swap->next;
			swap->prev = previous->prev;
			swap->next = previous;
			previous->prev = swap;

			print_list(*list);
		}
	}
}
