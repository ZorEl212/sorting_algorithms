#include "sort.h"

/**
 * swap_nodes - swap two nodes in place
 * @list: main list
 * @node1: the first node to swap
 * @node2: the 2nd node to swap
 *
 * Return: Nothing
*/
void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*list = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
* insertion_sort_list - sort a doubly linked list with insertion sort
* @list: list to be sorted
*
* Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *prev, *current;

	if (*list == NULL || (*list)->next == NULL)
		return;
	head = (*list)->next;

	while (head)
	{
		current = head->next;
		prev = head->prev;
		while (prev && head->n < prev->n)
		{
			swap_nodes(list, &prev, head);
			print_list(*list);
		}
		head = current;
	}
}
