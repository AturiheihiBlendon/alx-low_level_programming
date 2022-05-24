#include "lists.h"

/**
  * listint_len - returns number of elements in a linked list
  * @h: points to a node
  * Return: number of elements in a linked list
  */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
		elements++;
	h = h->next;

	return (elements);
}
