#include "lists.h"

/**
 * add_nodeint - add  new node at the beginning of a linked list
 * @head: pointer to  first node in the list
 * @n: data to insert in new node
 *
 * Return: points to the new node, or NULL  fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}

