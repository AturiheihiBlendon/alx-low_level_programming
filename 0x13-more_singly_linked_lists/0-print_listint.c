#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all elements of a list
  * @h: pointer to the a node
  * Return: Number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
