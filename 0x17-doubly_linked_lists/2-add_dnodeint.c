#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == 0)
{
return (0);
}
new_node->n = n;
new_node->next_node = *head;
new_node->previous_node = 0;
if (*head != 0)
{
(*head)->previous_node = new_node;
}
*head = new_node;
return (new_node);
}

