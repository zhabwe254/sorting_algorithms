#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @node_a: First node to swap
 * @node_b: Second node to swap
 * @head: Pointer to the head of the list
 *insertion_sort_list - Sorts a doubly linked list in ascending
 */

void swap(listint_t *node_a, listint_t *node_b, listint_t **head)
{
	listint_t *prev_a = NULL, *next_b = NULL;

	if (node_a == NULL || node_b == NULL)
		return;

	prev_a = node_a->prev;
	next_b = node_b->next;

	if (prev_a)
		prev_a->next = node_b;

	if (next_b)
		next_b->prev = node_a;

	node_a->next = next_b;
	node_a->prev = node_b;
	node_b->next = node_a;
	node_b->prev = prev_a;

	if (prev_a == NULL)
	*head = node_b;
}

/**
* insertion_sort_list - Sorts a doubly linked list in ascending order using
*                        the Insertion sort algorithm
* @list: Pointer to the head of the doubly linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous;
	int current_value;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = *list;

	while (current)
	{
		previous = current->prev;
			current_value = current->n;

		while (previous && previous->n > current_value)
		{
			swap_nodes(previous, current, list);
			print_list(*list);
			previous = current->prev;
		}
		current = current->next;
	}
}
