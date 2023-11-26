#include "lists.h"

/**
* print_dlistint – prints doubly-linked list
* @h: address of head node
* Return: size of list
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t i = 0;

    while (h)
    {
        printf("%d\n", h->n);  // Print the data of the current node
        h = h->next;           // Move to the next node
        i++;                   // Increment the counter
    }

    return (i);  // Return the size of the list
}
