#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * the function sets the head to NULL.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *initial_node;
	listint_t *next_node;

	if (!head)
		return;

	initial_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(initial_node);
		initial_node = next_node;
		next_node = next_node->next;
	}
	free(initial_node);
	*head = 0;
}
