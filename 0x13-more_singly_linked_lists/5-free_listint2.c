#include "lists.h"



/**
 * free_list - free
 * @head: h
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *node;
node = *head;
while (node)
	{
    temp = node;
		node = node->next;
		free(temp);
	}
  *head = NULL;

}
