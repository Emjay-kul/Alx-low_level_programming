#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a node to a singly linked list
 * @head: pointer to the pointer to the first element
 * @n: the integer to intialize with
 * Return: address of item just added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l)
	{
		l->n = n;
		l->next = *head;
		*head = l;
	}
	return (l);
}
