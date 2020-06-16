#include "sort.h"

/**
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *e = (*list)->next;

	if (!list || !*list)
		return;

	while (e)
	{
		while ((e->prev != NULL) && (e->prev->n > e->n))
		{
			e->prev->next = e->next;
			if (e->next)
				e->next->prev = e->prev;

			e->next = e->prev;
			e->prev = e->prev->prev;
			e->next->prev = e;

			if(e->prev == NULL)
			{
				*list = e;
			}
			else
			{
				e->prev->next = e;
			}
			print_list(*list);
		}
		e = e->next;
	}
}
