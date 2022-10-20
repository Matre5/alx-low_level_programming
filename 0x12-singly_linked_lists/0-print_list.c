#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the elements in list_t
 * @h: the list in list_t
 *
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
