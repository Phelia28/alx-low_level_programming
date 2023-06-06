#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list
 *
 * @head: head of linked list
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *camp;

	if (head == NULL)
		return;
	camp = *head;
	while (camp != NULL)
	{
		camp = camp->next;
		free(*head);
		*head = camp;
	}
	*head = NULL;
}
