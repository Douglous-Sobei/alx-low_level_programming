#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *initial_node;
	listint_t *next_node;

	if (head)
	{
		initial_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(initial_node);
			initial_node = next_node;
			next_node = next_node->next;
		}
		free(initial_node);
	}
}
