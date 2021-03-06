#include "lists.h"

/**
 * dlistint_len - return num elements
 * @h: pointer to a node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
