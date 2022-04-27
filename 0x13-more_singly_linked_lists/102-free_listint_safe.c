#include "lists.h"
#include <stdio.h>

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_linkl2(listl_k **head)
{
	listl_k *tmp;
	listl_k *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listl_k *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listl_k));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_linkl2(&ptr);
				return (num);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		num++;
	}

	*h = NULL;
	free_linkl2(&ptr);
	return (num);
}
