#include "sort.h"
/**
 * my_head - head of linked list
 * @tmp: node in linked list
 * Return: head of linked list
 */
listint_t *my_head(listint_t *tmp)
{
	while (tmp->prev)
		tmp = tmp->prev;
	return (tmp);
}

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *holdval, *prv;

	if (list == NULL)
	{
		return;
	}
	tmp = my_head(*list);

	for (tmp = tmp->next; tmp;)
	{
		holdval = tmp->next;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			prv = tmp->prev;
			prv->next = tmp->next;
			tmp->prev = prv->prev;
			prv->prev = tmp;
			tmp->next = prv;
			if (prv->next)
				prv->next->prev = prv;
			if (tmp->prev)
				tmp->prev->next = tmp;
			print_list(my_head(*list));
		}
		tmp = holdval;
	}
	*list = my_head(*list);
}
