#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: old list to appen
 * @size: size of the new list
 * @new: new node to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
