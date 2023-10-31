#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Function that checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: 0, if there is no cycle and 1, if there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *marb, *lade;

	if (list == NULL || list->next == NULL)
		return (0);

	marb = list->next;
	lade = list->next->next;

	while (marb && lade && lade->next)
	{
		if (marb == lade)
			return (1);

		marb = marb->next;
		lade = lade->next->next;
	}

	return (0);
}
