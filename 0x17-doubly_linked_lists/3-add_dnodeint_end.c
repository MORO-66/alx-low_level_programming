#include "lists.h"
/**
*add_dnodeint – prints doubly-linked list
*@head: address of head node
*@n: mmm
*Return: size of list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *node;
if (!head || !new)
return (new ? free(new), NULL: NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
new->prev = NULL;
*head = new;
}
else
{
node = *head;
while (node->next)
node = node->next;

node->next = new;
new->prev = node;
*head = new;
}
return (new);
}