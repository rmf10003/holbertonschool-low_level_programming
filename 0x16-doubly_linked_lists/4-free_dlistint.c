#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to a ll
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
