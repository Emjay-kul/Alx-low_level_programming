#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t
 * @head: the head of the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
