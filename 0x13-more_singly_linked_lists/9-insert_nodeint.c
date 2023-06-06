#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node.
 * @head: Pointer to head.
 * @index: Node to insert.
 * @n: Data of the new node.
 * Return: Address of the new node otherwise NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *prev, *addnew;

	prev = *head;

	addnew = malloc(sizeof(listint_t));

	if (addnew == NULL)
		return (NULL);
	addnew->n = n;
	if (index == 0)
	{
		addnew->next = prev;
		*head = addnew;
		return (*head);
	}
	while (index > 1)
	{
		prev = prev->next;
		index--;
		if (!prev)
		{
			free(addnew);
			return (NULL);
		}
	}
	addnew->next = prev->next;
	prev->next = addnew;
	return (addnew);
}
