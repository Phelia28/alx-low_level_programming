#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 *
 * @head: head of linked list
 *
 * @n: integer
 *
 * Return: address of new element or NULL if it fails
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnew;
	listint_t *camp;

	addnew = malloc(sizeof(listint_t));
	if (addnew == NULL)
		return (NULL);
	addnew->n = n;
	addnew->next = NULL;
	if (*head == NULL)
	{
		*head = addnew;
		return (addnew);
	}
	camp = *head;
	while (camp->next != NULL)
	{
		camp = camp->next;
	}
	camp->next = addnew;
	return (addnew);
}
