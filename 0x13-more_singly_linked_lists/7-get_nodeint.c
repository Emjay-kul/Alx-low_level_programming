#include "lists.h"
/**
 * get_nodeint_at-index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the node to return
 * Return: pointer to the nth element if it exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp != NULL && (i < index))
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
