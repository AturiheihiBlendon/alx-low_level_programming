#include "lists.h"

/**
  *add_nodeint - adds a new node at the start
  *@head: pointer to address of the list
  *@n: integer data
  *Return: address of the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
