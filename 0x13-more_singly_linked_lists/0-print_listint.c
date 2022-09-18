#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a linkint_t list
 * @h: a pointer to the list to iterate
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t i = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
