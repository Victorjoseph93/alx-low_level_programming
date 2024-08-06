#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - function that sum all the data
  * @head: node
  *
  * Return: returns nothing
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
