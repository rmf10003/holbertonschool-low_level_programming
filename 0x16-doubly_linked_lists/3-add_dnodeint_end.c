#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a linked list
 * @head: pointer to pointer to node
 * @n: int element
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *iter = *head;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else if (*head != NULL)
	{
		while (iter->next != NULL)
			iter = iter->next;
		iter->next = tmp;
		tmp->prev = iter;
	}
	return (tmp);
}
