#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 *
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned inti a;

tmp = head;
a = 0;
if (head == 0)
return (0);
while (tmp != 0)
{
if (i == index)
return (tmp);
tmp = tmp->next;
a++;
}
return (0);
}
