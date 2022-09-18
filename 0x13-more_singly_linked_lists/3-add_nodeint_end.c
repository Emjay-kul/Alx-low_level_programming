#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the pointer to the first element
 * @n: the integer to add as value of the new node
 * Return: pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *node;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
		}
	}
	return (node);
}
