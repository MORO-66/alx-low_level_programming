#include "lists.h"

/**
 * add_nodeint - add at beginning
 * @head: frist node
 * @n: n
 * Return: struct
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;
  
	if (!head || !str)
		return (NULL);
	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);
  current->next = NULL;
	current->n = n;
  if (*head)
    current->next = (*head);
	(*head) = current;

	return (*head);


}
