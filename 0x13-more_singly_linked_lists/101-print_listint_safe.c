#include "lists.h"
#include <stdio.h>
/**
 * free_linkl - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */
void free_linkl(listl_k **head)
{
	listl_k *tmp;
	listl_k *current;

	if (head)
	{
		current = *head;
		while ((tmp = current))
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listl_k *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listl_k));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_linkl(&ptr);
				return (num);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}

	free_linkl(&ptr);
	return (num);
}
