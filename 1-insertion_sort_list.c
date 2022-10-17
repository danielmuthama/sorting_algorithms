#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list using the Insertion sort.
 * @list: Linked List.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *swap, *last;

	if (!list || !*list)
		return;

	node = *list;
	while (node->next)
	{
		if ((node->n) > (node->next->n))
		{
			swapper(node, node->next, list);
			last = node;
			node = node->prev;
			while (node->prev)
			{
				swap = node;
				if ((swap->n) < (swap->prev->n))
				{
					swapper(node->prev, swap, list);
				} else
				{
					break;
				}
			}
			node = last;
		} else
		{
			node = node->next;
		}
	}
}
/**
 * swapper - Swap nodes.
 * @lft: Left.
 * @rt: Right
 * @list: List
 */
void swapper(listint_t *lft, listint_t *rt, listint_t **list)
{
	listint_t *tmp;

	tmp = lft->prev;
	if (tmp)
		tmp->next = rt;
	else
		*list = rt;

	rt->prev = tmp;
	lft->prev = rt;
	lft->next = rt->next;
	rt->next = lft;
	if (lft->next)
		lft->next->prev = lft;

	print_list(*list);
}
