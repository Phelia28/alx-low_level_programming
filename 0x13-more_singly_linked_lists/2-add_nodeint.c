#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: head of linked list
 *
 * @n: integer
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnew;

	addnew = malloc(sizeof(listint_t));

	if (addnew == NULL)
	return (NULL);
	addnew->n = n;
	addnew->next = *head;
	*head = addnew;
	return (addnew);
}
