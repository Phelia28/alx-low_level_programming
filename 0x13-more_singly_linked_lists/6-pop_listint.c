#include "lists.h"

/**
 * pop_listint - function that Deletes the head node
 *
 * @head: Pointer to the first element
 *
 * Return: Head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *camp;

	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	camp = (*head)->next;
	free(*head);
	*head = camp;
	return (num);
}
