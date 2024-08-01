#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - shows the number of element in the list
 * @h: the linked list
 * Return: returns the number of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
