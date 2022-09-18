#include "lists.h"
/**
 * sum_listint - gives sum of all data in the list
 * @head: first element of the list
 * Return: sum of data in the list if not empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	const listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
