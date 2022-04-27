#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_address;

	new_address = (listint_t *) malloc(sizeof(listint_t));

	if (new_address == NULL)
	{
		free(new_address);
		return (NULL);
	}

	new_address->n = n;

	new_address->next = *head;
	*head = new_address;

	return (new_address);
}
