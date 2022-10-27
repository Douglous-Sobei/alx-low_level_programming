#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->next = 0;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;

	return (new);
}
