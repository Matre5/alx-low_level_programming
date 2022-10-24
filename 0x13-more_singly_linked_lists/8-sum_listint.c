#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in the list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 * Otherwise - the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
